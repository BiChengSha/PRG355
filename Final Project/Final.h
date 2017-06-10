#include<iostream>
#include<time.h>

using namespace std;

void displayMenu() {
	cout << "==========MAIN MENU OPTIONS==========" << endl; 
	cout << "1. Select a device to program" << endl;
	cout << "2. Display the current status of all devices" << endl;
	cout << "3. Exit" << endl; 
}

int validChoice(int choice) {
	while ((choice > 3) || (choice < 1)) {
		cout << "Invalid entry. Try again." << endl; 
		cin >> choice;
	}
	return choice;
}


void mainMenu(int choice) {
	switch (choice) {
	case 1:	devicePicker();
		break;
	case 2:	deviceStatus();
		break;
	case 3:	exit(0);
		break;
	}
}


void devicePicker() {
	int choice;
	listOfDevices();
	cin >> choice;
	choice = validChoice(choice);
	subMenu1(choice);
}

void listOfDevices() {
	cout << "==========LIST OF DEVICES==========" << endl;
	cout << "1. Thermostat" << endl;
	cout << "2. Lights" << endl; 
	cout << "3. Vacuum" << endl; 
}

void subMenu1(int choice) {
	switch (choice) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	}
}

void deviceStatus(){

}


class PrgDevice {
	time_t timer;
};

class Thermostat:PrgDevice {

};

class Lights:PrgDevice {

};

class Vacuum:PrgDevice {

};















