#include <iostream>
#include <vector>
#include <windows.h>
#include "Player.hpp"
#include "Board.hpp"
#include "Controller.hpp"
#include "HumanController.hpp"
#include "EasyAIController.hpp"


using namespace std;

PlayerType typeOfPlayer(int playerNumber)
{
	int choice = 1;
	do
	{
		if (choice != 1) cout << "Invalid number. Must be 1 or 2. Try again." << endl;
		cout << "Would you like player " << playerNumber << " to be human or computer? 1 for human, 2 for computer." << endl;
		cin >> choice;

	} while (playerNumber < 1 || playerNumber > 2);
	
	return (PlayerType)playerNumber;

};



int main()
{
	PlayerType playerOneType = typeOfPlayer(1);
	PlayerType playerTwoType = typeOfPlayer(2);

	Board board(playerOneType, playerTwoType);
	board.drawBoard();
	

}