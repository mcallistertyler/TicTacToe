#include "board.h"
#include "player.h"

int main(){
	//initialize board
	Board board;
	Player player;
	board.printBoard();
	player.inputPiece(board);
}