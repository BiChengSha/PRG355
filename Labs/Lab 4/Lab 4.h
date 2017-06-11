#include<iostream>
using namespace std;
typedef char String[80];

class Car{
private: 
	String model;
	double tankCapacity, consumption, fullTankDistance;
public:
	void getData() {
		fflush(stdin); 
		cout << "Enter model of the car: " << endl; 
		fflush(stdin); 
		cin >> model;
		//cout << "--model: " << model << endl;
		fflush(stdin); 
		cout << "Enter capacity of fuel tank (Litres): " << endl; 
		cin >> tankCapacity;
		//cout << "--tank cap: " << tankCapacity << endl; 
		fflush(stdin); 
		cout << "Enter average fuel consumption (L/100KM): " << endl;
		cin >> consumption;
		//cout << "--consumption: " << consumption << endl; 
		fflush(stdin); 
	}
	double maxDistance() {
		fullTankDistance = (tankCapacity/consumption)*100;
		//cout << "--full tank: " << fullTankDistance << endl; 
		return fullTankDistance;
	}
	int refuel(double trip) {
		int refills = (trip/fullTankDistance) - 1;
		//cout << "--refills: " << refills << endl; 
		return refills;
	}
};