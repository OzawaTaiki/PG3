#include "Logicool.h"
#include <iostream>


Logicool::Logicool(std::string _name, int _price)
{
    name_ = _name;
    price_ = _price;
}

Logicool::~Logicool()
{
    std::cout << name_ << std::endl;
    std::cout << "打鍵感は悪くないが底打ち音が少し気になる" << std::endl;
}

void Logicool::Explain()
{
    std::cout << name_ << std::endl;
    std::cout << "price : " << price_ << std::endl;
    std::cout << "軸: メカニカル" << std::endl;
}
