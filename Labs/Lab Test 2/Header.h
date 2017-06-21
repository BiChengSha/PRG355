#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Vehicle {
protected:
	int tankCapacity;
	float consumption;
	string model;

public:
	Vehicle() {
		getchar();
		cout << "Enter model name: " << endl; 
		cin >> model;
		cout << "Enter fuel tank capacity (in L): " << endl; 
		cin >> tankCapacity;
		cout << "Enter fuel consumption in L (per 100km): " << endl; 
		cin >> consumption;
	}

	float maxDistance(int capacity, float consume) {
		return ((capacity/consume) * 100);
	}
};

class Car:Vehicle {
	int topSpeed;

public:
	Car() {
		cout << "Enter top speed for this car (km/h): " << endl; 
		cin >> topSpeed;
	}
	friend ostream& operator <<(ostream &cout, Car &c) {
		cout << "Car model name: " << c.model << endl; 
		cout << "Holds up to " << c.tankCapacity << "L of fuel." << endl;
		cout << "Uses " << c.consumption << "L of fuel per 100km." << endl;
		cout << "Can travel up to " << c.maxDistance(c.tankCapacity, c.consumption) << "km on a single tank." << endl; 
		cout << "Can travel up to " << c.topSpeed << "km/h."<< endl;
		return cout;
	}

	friend istream& operator >>(istream &in, Car &c) {
		getchar();
		cout << "Enter model name: " << endl;
		in >> c.model;
		cout << "Enter fuel tank capacity (in L): " << endl;
		in >> c.tankCapacity;
		cout << "Enter fuel consumption in L (per 100km): " << endl;
		cin >> c.consumption;
		cout << "Enter top speed for this car (km/h): " << endl; 
		cin >> c.topSpeed;
		return in;
	}
};