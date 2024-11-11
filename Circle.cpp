#include "Circle.h"

#include <iostream>

void Circle::Size()
{
    space_ = 3.14 * radius * radius;
}

void Circle::Draw()
{
    std::cout << "Circle Draw" << std::endl;
    std::cout << "radius :" << radius << std::endl;
    std::cout << "Circle Area :" << space_ << std::endl;
}
