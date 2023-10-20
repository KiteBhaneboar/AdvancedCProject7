#pragma once

using namespace std; 

class Controller { //to choose move
public:
	virtual int ChooseMove() = 0;
};