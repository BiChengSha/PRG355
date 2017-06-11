#include"Lab 6.h"

void main() {

	int numWorkstations;
	Workstation *workstations;

	cout << "How many workstations to work with?: " << endl; 
	cin >> numWorkstations;

	workstations = new Workstation[numWorkstations];

	workstations->displayActiveStations();

	cout << "\nBuffer is displayed below: " << endl;
	workstations->displayBuffer();

	cout << "\nCleared buffer is displayed below: " << endl;
	workstations->clearBuffer();
	workstations->displayBuffer();

	delete[]workstations;

	system("pause"); 
}


























