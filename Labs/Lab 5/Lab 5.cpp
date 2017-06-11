#include"Lab 5.h"

//using namespace std;

void menu();


void main() {

	bool result1, result2, result3;

	menu();

	Gate gate1, gate2;

	result1 = gate1.callGate();
	result2 = gate2.callGate();

	Gate gate3(result1, result2);
	result3 = gate3.callGate();

	cout << "Output results: " << endl; 
	cout << "Gate 1: " << result1 << endl; 
	cout << "Gate 2: " << result2 << endl;
	cout << "Gate 3: " << result3 << endl;

	system("pause"); 

}

void menu() {
	cout << "Types of gates available:" << endl; 
	cout << "1. AND" << endl; 
	cout << "2. OR" << endl;
	cout << "3. NAND" << endl;
	cout << "4. NOR" << endl;
	cout << "5. XOR" << endl;
}

