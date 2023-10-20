#include <cstdlib>
#include "EasyAIController.hpp"


using namespace std;

int EasyAIController::ChooseMove() 
{
	return 1 + (rand() % 7);
}

