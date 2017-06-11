#include<iostream>
#include"Lab 3.h"


using namespace std;


int main() {

	int *dyArr1;
	float *dyArr2;

	int arrSize1, arrSize2;

	cout << "Enter size for first arry: \n";
	cin >> arrSize1;
	cout << "Enter size for second array: \n";
	cin >> arrSize2;

	dyArr1 = new int[arrSize1];
	dyArr2 = new float[arrSize2];

	if (dyArr1 == 0 || dyArr2 == 0) {
		cout << "Mem allocation error. \n";
		exit(0);
	}

	for (int i = 0; i < arrSize1; i++) {
		dyArr1[i] = (rand() % 1000 + 1) - (rand() % 1000 + 1);
	}

	for (int i = 0; i < arrSize2; i++) {
		dyArr2[i] = ((float(rand() % 10000 + 1))/555) - ((float(rand() % 10000 + 1)) / 555);
	}

	cout << "\n\n----------Display initial outputs----------\n"; 
	display(dyArr1, arrSize1);
	display(dyArr2, arrSize2);

	cout << "\n\n----------Display sorted----------\n"; 
	low2Hi(dyArr1, arrSize1);
	low2Hi(dyArr2, arrSize2);

	cout << "\n\n----------Display reversed-----------\n"; 
	reverse(dyArr1, arrSize1);
	reverse(dyArr2, arrSize2);

	delete[]dyArr1;
	delete[]dyArr2;

	system("pause"); 

	return 0;

}

