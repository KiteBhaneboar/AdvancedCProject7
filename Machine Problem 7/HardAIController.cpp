//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//#include <tuple>
//#include <cmath>
//#include "HardAIController.hpp"
//
//
//
//using namespace std;
//
//struct DistanceSequence
//
//int HardAIController::ChooseMove(Board board)
//{
//	int moveNum = 1;
//	int moveType = 0;	
//	switch (moveNum)
//	{
//	case 1:
//			vector<Sequence> sequences = GetSequences(board.getBoard(), board.getRows(), board.getColumns(), this->piece == 'R' ? 'Y' : 'R');
//
//			if (sequences.size() == 0)
//			{
//				move = 1 + (rand() % 7);
//				return move;
//			}
//
//			//loops through to find other perosns pieces, find whichare cose to wining and block them
//			vector<tuple<float, Sequence>> distanceSequence;
//			for (Sequence sequence : sequences)
//			{
//				float distance = sqrt(pow((float)sequence.end.X - (float)sequence.start.X, 2) + pow((float)sequence.end.Y - (float)sequence.start.Y, 2));
//				distanceSequence.emplace_back(tuple<float, Sequence>(distance, sequence));
//			}
//
//			sort(distanceSequence.begin(), distanceSequence.end(), [](tuple<float, Sequence> left, tuple<float, Sequence> right) {
//				return greater<float>()(get<0>(left), get<0>(right));
//			});
//
//			Sequence opponentSequence = get<1>(distanceSequence.at(0));
//
//			COORD blockCoordinate;
//			CalculateIndices(opponentSequence.direction, opponentSequence.end.Y, opponentSequence.end.X, blockCoordinate.Y, blockCoordinate.X);
//
//	}
//	GetSequences(board.getBoard(), board.getRows(), board.getColumns(), this->piece == 'R' ? 'Y' : 'R')
//
//
//}
//
//
////evey other move blocks squenece
////otherwise puts pice direclty next to your newly put down piece
////tries to ectend its own sequences, if player has no sequences longer than two
