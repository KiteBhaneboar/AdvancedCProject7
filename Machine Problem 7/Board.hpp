#pragma once
#include "Player.hpp"
using namespace std;

class Board
{
private:
	char board[6][8] = { ' ' };
	int rows = 6;
	int columns = 8;
	Player* playerOne;
	Player* playerTwo;
public:
	Board(PlayerType playerOneType, PlayerType playerTwoType);
	void drawBoard();
	char** getBoard();
	int getRows();
	int getColumns();
};