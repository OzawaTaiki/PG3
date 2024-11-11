#pragma once

#include "BaseKeyBoard.h"
#include <string>

class RealForce : public BaseKeyboard
{
public:

	RealForce(std::string _name, int _price);
	~RealForce()override;

	void Explain() override;


};