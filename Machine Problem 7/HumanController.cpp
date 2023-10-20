#include <iostream>
#include "HumanController.hpp"

using namespace std;

int HumanController::ChooseMove()
{
	int row;
	cout << "Which row would you like to play? (1-6)";
	cin >> row;
	return row;
};