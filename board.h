#pragma once

class Board
{
public:
	Board();
	void printBoard();
	bool checkForPieces();
	int val[3][3]={
		{0,0,0}, //index by 0
		{0,0,0},
		{0,0,0}
	};

};
