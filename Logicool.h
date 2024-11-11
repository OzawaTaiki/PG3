#pragma once

#include "BaseKeyBoard.h"

class Logicool : public BaseKeyboard
{
public:

    Logicool(std::string _name, int _price);
    ~Logicool() override;

    void Explain() override;

private:

};