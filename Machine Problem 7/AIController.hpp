#pragma once
#include "Controller.hpp"
#include "Piece.hpp"

class AIController : public Controller
{
protected:
	char piece;
public:
	AIController(Piece piece);
	char getPiece();
};