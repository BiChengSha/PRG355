#include<iostream>
#include<string>
using namespace std;


class Workstation {
private:
	static string buffer;
	static int activeStations;
	string message;
	int identifier;


public:

	Workstation() {
		setWorkstation();
		activeStations++;
		copyMessage();
	}

	static void clearBuffer() {
		buffer = "";
	}

	static void displayBuffer() {
		cout << buffer << endl; 
	}
	
	static void displayActiveStations() {
		cout << "\nThere are currently " << activeStations << " active stations" << endl; 
	}
	
	void setWorkstation() {
		cout << "\nEnter workstation ID: " << endl;
		cin >> identifier;
		cout << "Enter message for workstation to post: ";

		getchar();
		std::getline(std::cin, message);
	}
	
	void copyMessage() {
		buffer = buffer + message + " ";
	}

};

string Workstation::buffer;
int Workstation::activeStations;







