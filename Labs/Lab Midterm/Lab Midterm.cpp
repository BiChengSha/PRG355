#include"Header.h"

void main() {
	
	int playerCount;
	Player* players;

	cout << "Enter number of players: " << endl; 
	cin >> playerCount;

	players = new Player[playerCount];

	if (players == 0) {
		cout << "MEMORY ALLOCATION FAILED. "; 
	}
	
	players -> sort(players, playerCount);
	players -> average(playerCount);
	
	delete[]players;
	
	system("pause"); 
}