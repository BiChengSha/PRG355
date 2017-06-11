#include<iostream>
using namespace std;

class Gate {

private:

	bool input1, input2, result;
	int gateType;

	bool AND() {
		result = input1 & input2;
		return result;
	}
	bool OR() {
		result = input1 | input2;
		return result;
	}
	bool NAND() {
		result = !(input1 & input2);
		return result;
	}
	bool NOR() {
		result = !(input1 | input2);
		return result;
	}
	bool XOR() {
		result = input1 ^ input2;
		return result;
	}

public:

	Gate() {
		cout << "Select gate (1-5):\n";
		cin >> gateType;
		cout << "gateType = " << gateType << endl; 
		cout << "Enter first input: \n";
		cin >> input1;
		cout << "input1 = " << input1 << endl; 
		cout << "Enter second input: \n"; 
		cin >> input2;
		cout << "input2 = " << input2 << endl; 
	}

	Gate(bool in1, bool in2) {
		cout << "Select gate (1-5):\n";
		cin >> gateType;
		input1 = in1;
		input2 = in2;
		cout << "gateType = " << gateType << endl;
		cout << "input1 = " << input1 << endl;
		cout << "input2 = " << input2 << endl;
	}

	bool callGate() {
		switch (gateType) {
		case 1: return AND();
		case 2: return OR();
		case 3: return NAND();
		case 4: return NOR();
		case 5: return XOR();
		}
	}

};

