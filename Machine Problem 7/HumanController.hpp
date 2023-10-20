#pragma once
#include "Controller.hpp"




class HumanController : public Controller //lets player choose
{ 
public:
	int ChooseMove();
};