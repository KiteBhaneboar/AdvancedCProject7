#include "Player.hpp"

using namespace std;

Player::Player(PlayerType player, Piece piece)
{

	switch (player)
	{
		case Human:
			this->controller = new HumanController();
			break;
		case EasyAI:
			this->controller = new EasyAIController();
			break;
		/*case MediumAI:
			this->controller = new MediumAIController();
			break;
		case HardAI:
			this->controller = new HardAIController(board);
			break;*/
	}

}

int Player::ChooseMove()
{
	return controller->ChooseMove();
}
