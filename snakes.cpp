#include <iostream>
#include "function.h"
using namespace std; 

class myGame{

	protected:
		// Tablero
		char mainboard[30] = {'N','N','N','N','N','N','L','N','N','S','N','N','N','L','N','N','S','N','N','N','L','N','N','N','N','N','N','S','N','N',}; 
		char tileType;

		// Player number and data
		int playerNum;
		int currentTile = 1;
		int newTile;
		int finalTile;
		int tileTypeEffect;

		//Turno
		void turno(){
			cout << playerNum << " " << currentTile << " " << roll() << " ";
			newTile = currentTile + roll();
			tileType = mainboard[newTile];
			if (newTile >= 30){tileType = 'N';}
			cout << tileType << " ";
			if (tileType == 'N') {tileTypeEffect = 0;} else if (tileType == 'S') {tileTypeEffect = -3;} else if (tileType == 'L') {tileTypeEffect = 3;}
			finalTile = newTile + tileTypeEffect;
			if (finalTile >= 30){finalTile = 30;}
			cout << finalTile << endl;
			currentTile = finalTile;
		};

	public:
		myGame(int pn){playerNum = pn;};
		char userInput;
		bool gameEnded = false;
		void start(){
				if (userInput == 'C'){turno(); if(currentTile >= 30){cout <<"Player " << playerNum << " is the winner!!! " << endl; gameEnded = true;}}
				else if (userInput == 'E'){cout << "\r"<< "Thanks for playing!!!  " << endl; gameEnded = true;}
				else {cout << "Invalid option, please press C to continue next turn or E to end the game" << endl; }
			}

		};

int main() {
	cout << "Press C to continue next turn, or E to end the game:" << endl;
	int turn = 1;
	myGame p1(1);
	myGame p2(2);
	while(1){
		cin >> p1.userInput;
		cout << turn << " ";
		p1.start();
		turn += 1;
		if(turn >= 25){cout << "The maximum number of turns has been reached" << endl; break;}
		if(p1.gameEnded == true || p2.gameEnded == true){break;}
		cin >> p2.userInput;
		cout << turn << " ";
		p2.start();
		turn += 1;
		if(turn >= 25){cout << "The maximum number of turns has been reached" << endl; break;}
		if(p1.gameEnded == true || p2.gameEnded == true){break;}
		}
	cout << "-- GAME OVER -- ";
}