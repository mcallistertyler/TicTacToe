#include "board.h"
#include <iostream>
#include <string>
using namespace std;

Board::Board(){

}

bool Board::checkForPieces(){
	//Horizontal checking
	for(int x = 0; x < 3; x++){
		if(val[x][0] == 1 && val[x][1] == 1 && val[x][2] == 1){
			return true;
		}
		else if(val[x][0] == 2 && val[x][1] == 2 && val[x][2] == 2){
			return true;
		}
	}
	//Vertical checking
	for(int y = 0; y < 3; y++){
		if(val[0][y] == 1 && val[1][y] == 1 && val[2][y] == 1){
			return true;
		}
		else if(val[0][y] == 2 && val[1][y] == 2 && val[2][y] == 2){
			return true;
		}
	}
	//Diagonal checking - right direction
	if(val[0][0] == 1 && val[1][1] == 1 && val[2][2] == 1){
		return true;

	}
	else if(val[0][0] == 2 && val[1][1] == 2 && val[2][2] == 2){
		return true;

	}
	//Diagonal checking - left direction
	if(val[0][2] == 1 && val[1][1] == 1 && val[2][0] == 1){
		return true;
	}
	else if(val[0][2] == 2 && val[1][1] == 2 && val[2][0] == 2){
		return true;
	}

	return false;
	
	
}

void Board::printBoard(){
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			if(y == 0){
				cout << "|";
			}
			if(val[x][y] == 0){
				cout << "=" << "|";
			}
			if(val[x][y] == 1){
				cout << "O" << "|";
			}
			if(val[x][y] == 2){
				cout << "X" << "|";
			}
		if(y == 2){
			cout << "\n";
		}
		}
	}
}