#include "Rectangle.h"

#include <iostream>

void Rectangle::Size()
{
    space_ = width * height;

}

void Rectangle::Draw()
{
    std::cout << "Rectangle Draw" << std::endl;
    std::cout << "Width :" << width << std::endl;
    std::cout << "Height :" << height << std::endl;
    std::cout << "Area :" << space_ << std::endl;
}
