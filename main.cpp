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

    std::thread t([&]() {
        csv.ReadCSV("data/test.csv");
        });
    t.detach();

    while (!t.joinable())
    {
        std::cout << "Waiting for thread to join..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }



    data = csv.GetData();

    for (auto& row : data)
    {
        for (auto& cell : row)
        {

            std::cout << cell << ",";

        }
        std::cout << std::endl;
    }


	return 0;
}