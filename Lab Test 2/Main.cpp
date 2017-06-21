#include"Header.h"


void main() {
	int i, numCars;

	cout << "Enter number of cars: " << endl; 
	cin >> numCars;

	Car *cars = new Car[numCars];

	std::system("cls"); 

	for (i = 0; i < numCars; i++) {
		cout << "Car #" << (i + 1) << endl; 
		cout << cars[i];
	}

	ofstream listOfCars("cars.dat", ios::app | ios::binary);

	listOfCars.write((char *)cars, numCars*sizeof(Car));
	listOfCars.close();

	delete[]cars;
	std::system("pause"); 
}