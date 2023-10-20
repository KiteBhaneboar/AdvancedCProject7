#pragma once
#include <windows.h>
#include <vector>

using namespace std;


enum Direction
{
	Up = 1,
	Left = 2,
	UpLeft = 3,
	Down = 4,
	DownLeft = 6,
	Right = 8,
	UpRight = 9,
	DownRight = 12
};

struct Sequence
{
	COORD start;
	COORD end;
	Direction direction;
};

Direction directions[8] = { Up, Left, UpLeft, Down, DownLeft, Right, UpRight, DownRight };

void CalculateIndices(Direction direction, int row, int col, short& checkRow, short& checkCol);
Sequence CheckForSequence(char** array, char search, int rowCount, int columnCount, Direction direction, COORD start, COORD prev);
vector<Sequence> GetSequences(char** array, int rowCount, int columnCount, char search);
