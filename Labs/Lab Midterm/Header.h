#include<iostream>
#include<string>
using namespace std;

class Player {
private:
	string playerName;
	int score;
	static int totalScore;

public:
	Player() {
		cout << "Enter player name: "; 
		cin >> playerName;
		cout << "Enter player score: "; 
		cin >> score;
		totalScore = totalScore + score;
	}

	static void sort(Player list[], int size) {
		int tempScore;
		string tempName;
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (list[j].score < list[j + 1].score) {
					tempScore = list[j].score;
					tempName = list[j].playerName;
					list[j].score = list[j + 1].score;
					list[j].playerName = list[j + 1].playerName;
					list[j + 1].score = tempScore;
					list[j + 1].playerName = tempName;
				}
			}
		}
		cout << "Top 3 players: " << endl; 
		for (int i = 0; i < size; i++) {
			cout << list[i].playerName << "\t\t" << list[i].score << endl; 
		}
	}

	static void average(int amountOfPlayers) {
		double aveScore = (totalScore*1.0)/amountOfPlayers;
		cout << "=========================" << endl;
		cout << "Average score: " << aveScore << endl; 
	}
};

int Player::totalScore;
