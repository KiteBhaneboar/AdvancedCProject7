#include <vector>
#include "Sequences.hpp"

using namespace std;



void CalculateIndices(Direction direction, int row, int col, short& checkRow, short& checkCol)
{
	bool isUp = (direction & Up) == Up;
	bool isLeft = (direction & Left) == Left;
	bool isDown = (direction & Down) == Down;
	bool isRight = (direction & Right) == Right;

	checkRow = (isUp ? row + 1 : isDown ? row - 1 : row);
	checkCol = (isRight ? col + 1 : isLeft ? col - 1 : col);
}

bool NotInBounds(COORD checkCoord, int rowCount, int columnCount)
{
	return checkCoord.Y < 0 || checkCoord.X < 0 || checkCoord.Y >= rowCount || checkCoord.X >= columnCount;
};

Sequence CheckForSequence(char** array, char search, int rowCount, int columnCount, Direction direction, COORD start, COORD prev)
{

	COORD current = { prev.X, prev.Y };
	NotInBounds(current, rowCount, columnCount);
	CalculateIndices(direction, prev.Y, prev.X, current.Y, current.X);
	if (array[current.Y][current.X] != search)
	{
		Sequence startEnd = { start, prev, direction };
		return startEnd;
	}
	return CheckForSequence(array, search, rowCount, columnCount, direction, start, current);
}


vector<Sequence> GetSequences(char** array, int rowCount, int columnCount, char search) //where to start and what diection to look in
{
	vector<Sequence> sequences;
	for (int row = 0; row < rowCount; row++)
	{
		for (int col = 0; col < columnCount; col++)
		{
			if (array[row][col] != search) continue;
			for (Direction direction : directions)
			{

				COORD start = { row, col };
				COORD checkCoord = { 0 , 0 };
				CalculateIndices(direction, row, col, checkCoord.Y, checkCoord.X);
				if (NotInBounds(checkCoord, row, col)) continue;
				if (array[checkCoord.Y][checkCoord.X] == search)
				{
					Sequence sequence = CheckForSequence(array, search, rowCount, columnCount, direction, start, checkCoord);
					sequences.emplace_back(sequence);
				}
			}
		}
	}
	return sequences;
}