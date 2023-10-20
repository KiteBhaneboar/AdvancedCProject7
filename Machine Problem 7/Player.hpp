#pragma once
#include "Controller.hpp"
#include "EasyAIController.hpp"
//#include "MediumAIController.hpp"
//#include "HardAIController.hpp"
#include "HumanController.hpp"
#include "Piece.hpp"

using namespace std;


enum PlayerType
{
	Human = 1,
	EasyAI,
	MediumAI,
	HardAI
};



class Player
{
private:
	Controller* controller;
	Piece piece;
public:
	Player(PlayerType type, Piece piece);
	int ChooseMove();
};

