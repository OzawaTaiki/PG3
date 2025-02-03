#include <iostream>
//#include <stdio.h>
#include <Windows.h>
#include <sstream>
#include <thread>

#include "CSVHandler.h"

// PG proj
// LE2A_06_オザワ

int main() {

    CSVHandler csv;
    std::vector<std::vector<std::string>> data;
    std::string filename = "data/test.csv";

    std::thread t([&]() {
        csv.ReadCSV(filename);
        });

    // csv読み込み中
    std::cout << "Loading :" << filename << std::endl;

    uint32_t count = 0;
    while (true)
    {
        if (csv.IsReady())
        {
            break;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(1));

        count++;
        if (count % 100 == 0)
        {
            std::cout << "Main thread is still running..." << std::endl;
        }
    }

    std::cout << "CSV file loaded!" << std::endl << std::endl;

    data = csv.GetData();

    for (auto& row : data)
    {
        for (auto& cell : row)
        {

            std::cout << cell << ",";
            std::this_thread::sleep_for(std::chrono::milliseconds(10));

        }
        std::cout << std::endl;
    }

    t.join();

	return 0;
}