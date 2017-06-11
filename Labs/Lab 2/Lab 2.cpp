#include<iostream>
#include"Lab 2.h"

using namespace std;
using namespace Gates;

void menu();
int validGate(int choice);
bool callGate(int choice, bool bit1, bool bit2);

int main() {

	int gate[3];
	bool bit1[3], bit2[3], result[3];

	menu();

	for (int i = 0; i < 3; i++) {
		cout << "Select gate #" << i + 1 << " (1-5):\n";
		cin >> gate[i];
		gate[i] = validGate(gate[i]);
		if (i < 2) {
			cout << "Enter 2 inputs for gate #" << i + 1 << " (separate with a space):\n"; 
			cin >> bit1[i] >> bit2[i];
			result[i] = callGate(gate[i], bit1[i], bit2[i]);
		} else {
			result[i] = callGate(gate[i], result[0], result[1]);
		}
	}

	for (int i = 0; i < 3; i++) {
		cout << "Output #" << i+1 << ": " << result[i] << "\n"; 
	}

	system("pause");
	return 0;
}

void menu() {
	cout << "Types of gates available:\n";
	cout << "1. AND\n";
	cout << "2. OR\n"; 
	cout << "3. NAND\n"; 
	cout << "4. NOR\n"; 
	cout << "5. XOR\n"; 
}

int validGate(int choice) {

	bool isValid = false;
	do {
		if (choice < 1 || choice > 5) {
			cout << "Invalid input.\n";
			cout << "Select gate # (1-5):\n";
			cin >> choice;
			fflush(stdin); 
		} else {
			isValid = true;
			return choice;
		}
	} while (isValid == false);
}

bool callGate(int choice, bool bit1, bool bit2) {
	switch (choice) {
	case 1:	return AND(bit1, bit2);
	case 2: return OR(bit1, bit2);
	case 3: return NAND(bit1, bit2);
	case 4:	return NOR(bit1, bit2);
	case 5:	return XOR(bit1, bit2);
	}
}