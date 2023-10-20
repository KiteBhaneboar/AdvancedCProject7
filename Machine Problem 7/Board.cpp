#include <iostream>
#include <windows.h>
#include "Board.hpp"
#include "Controller.hpp"

using namespace std;

Board::Board(PlayerType playerOneType, PlayerType playerTwoType)
{
	playerOne = new Player(playerOneType, Piece::PlayerOne);
	playerTwo = new Player(playerTwoType, Piece::PlayerTwo);
}

void Board::drawBoard()
{
	this->board;
	HANDLE handle; //reprints board in upper left corner
	COORD coord;
	
	coord.X = 0;
	coord.Y = 0;

	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, coord); //reprint end
	

	for (int row = 0; row < sizeof(board)/sizeof(board[0]); row++)
	{
		for (int col = 0; col < sizeof(board[0]) / sizeof(char); col++)
		{
			cout << "-------";
		}
		cout << "-" << endl;

		for (int col = 0; col < sizeof(board[0]) / sizeof(char); col++)
		{
			cout << "|" << "  ";
			cout << (board[row][col] == 'R' ? "\x1B[31m" : board[row][col] == 'Y' ? "\x1B[93m" : "");
			cout << board[row][col] << "\033[0m" << "  ";
		}
		cout << endl;
	}
	cout << "---------------------------------------------------------" << endl;
	
	// printing move player one
	int moveOne = this->playerOne->ChooseMove();
	for (int i = 6; i >= 0; i++)
	{
		if (board[i][moveOne - 1] == ' ')
		{
			board[i][moveOne - 1] = 'R';
			break;
		}	
	}

	// printing move player two
	int moveTwo = this->playerTwo->ChooseMove();
	for (int i = 6; i >= 0; i++)
	{
		if (board[i][moveTwo - 1] == ' ')
		{
			board[i][moveTwo - 1] = 'Y';
			break;
		}
	}
}


char** Board::getBoard() { return (char**)board; };
int Board::getRows() { return rows; }
int Board::getColumns() { return columns; }