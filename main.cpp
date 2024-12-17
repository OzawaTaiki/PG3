#include <iostream>
//#include <stdio.h>

#include <thread>

// PG proj
// LE2A_06_オザワ

int main() {


    std::thread thread1([]() {std::cout << "thread1" << std::endl; });
    thread1.join();

    std::thread thread2([]() {std::cout << "thread2" << std::endl; });
    thread2.join();

    std::thread thread3([]() {std::cout << "thread3" << std::endl; });
    thread3.join();

	return 0;
}