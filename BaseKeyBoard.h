#pragma once

#include <string>
class BaseKeyboard
{
public:

    BaseKeyboard() {};
    virtual ~BaseKeyboard() {};

    virtual void Explain() = 0;

protected:

    std::string name_;
    int price_;

};