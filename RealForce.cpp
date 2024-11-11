#include "RealForce.h"
#include <iostream>

RealForce::RealForce(std::string _name, int _price)
{
    name_ = _name;
    price_ = _price;
}

RealForce::~RealForce()
{
    std::cout << name_ << std::endl;
    std::cout << "打鍵感がとても良い。F1~12キーが何気にありがた。高い" << std::endl;
}

void RealForce::Explain()
{
    std::cout << name_ << std::endl;
    std::cout << "price : " << price_ << std::endl;
    std::cout << " 軸: 静電容量無接点方式" << std::endl;
}
