#include "player.h"
#include <iostream>
#include <string>
using namespace std;

Player::Player(){
}

void Player::availablePieces(Board board){
	cout << "Available places: \n";
	for(int x = 0; x < 3; x++){
		for (int y = 0; y < 3; y++){
			if(board.val[x][y] == 0){
				cout << x << "," << y << endl;
			}
		}
	}
}

void Player::inputPiece(Board board){
	pieceTurn currentTurn = oTurn;
	cout << "Input your piece, O goes first" << endl;
	cout << "Select a place on the board" << endl;
	availablePieces(board);
	while(gameEnd == false){
		int pieceX;
		int pieceY;
		cout << "Enter x value: \n";
		cin >> pieceX;
		cout << "Enter y value: \n";
		cin >> pieceY;
		if(currentTurn == oTurn){
			board.val[pieceX][pieceY] = 1;
			currentTurn = xTurn;
		}
		else if(currentTurn == xTurn){
			board.val[pieceX][pieceY] = 2;
			currentTurn = oTurn;
		}
		cout << "\nCurrent available places\n";
		availablePieces(board);
		board.printBoard();
		gameEnd = board.checkForPieces();
		if(gameEnd == true){
			if(currentTurn == oTurn){
			cout << "Game over the winner is X!\n";
			}
			else{
				cout << "Game over the winner is O!\n";
			}
		}
	}

}

