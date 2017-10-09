#pragma once
#include "board.h"
class Player{
public:
	Player();
	void inputPiece(Board board);
	void availablePieces(Board board);
private:
	enum pieceTurn {xTurn, oTurn};
	bool gameEnd = false;
};