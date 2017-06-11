#include<iostream>
#include"Lab 4.h"

using namespace std;

int main() {

	int carCount;
	double distance;
	Car *list;

	cout << "How many cars are you dealing with? " << endl; 
	cin >> carCount;
	fflush(stdin); 

	list = new Car[carCount];

	for (int i = 0; i < carCount; i++) {
		cout << "Car #" << (i + 1) << endl; 
		fflush(stdin); 
		list[i].getData();
	}

	cout << "How far are you travelling? (KM): " << endl;
	cin >> distance;

	for (int i = 0; i < carCount; i++) {
		cout << "Car #" << (i + 1) << " can go " << list[i].maxDistance() << "KM in one full tank." << endl;
	}

	for (int i = 0; i < carCount; i++) {
		cout << "Car #" << (i + 1) << " will require " << list[i].refuel(distance) << " refuels to cover " << distance << "KM assuming the tank is full at start." << endl; 
	}

	system("pause"); 

	delete[]list;

	return 0;

}