#include <iostream>

#include <string>
#include <vector>
#include <chrono>

// PG proj
// LE2A_06_オザワ

int main()
{
    std::chrono::steady_clock::time_point start, end;

    std::string a(100000, 'a');

    start = std::chrono::high_resolution_clock::now();

    std::string copy = a;

    end = std::chrono::high_resolution_clock::now();

    std::cout << "Copy time: "
        << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
        << " μs" << std::endl;


    start = std::chrono::high_resolution_clock::now();

    std::string move = std::move(a);  // ムーブ

    end = std::chrono::high_resolution_clock::now();

    std::cout << "Move time: "
        << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
        << " μs" << std::endl;


    return 0;
}