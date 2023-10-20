#include "AIController.hpp"

AIController::AIController(Piece piece)
{
	this->piece = piece;
}

char AIController::getPiece() { return piece; }