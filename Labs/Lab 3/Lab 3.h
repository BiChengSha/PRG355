template<class First>
void low2Hi(First toSort[], int arrSize) {
	First temp;
	First *sorted = new First[arrSize];
	
	if (sorted == 0) {
		cout << "Mem allocation error. \n"; 
		exit(0);
	}

	sorted = toSort;

	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < (arrSize - 1); j++) {
			if (sorted[j] > sorted[j + 1]) {
				temp = sorted[j];
				sorted[j] = sorted[j + 1];
				sorted[j + 1] = temp;
			}
		}
	}
	
	display(sorted, arrSize);
}

template<class Second>
void reverse(Second toReverse[], int arrSize) {
	Second *reversed = new Second[arrSize];
	if (reversed == 0) {
		cout << "Mem allocation error. \n";
		exit(0);
	}

	for (int i = 0; i < arrSize; i++) {
		reversed[(arrSize-i)-1] = toReverse[i];
	}
	display(reversed, arrSize);
	delete[]reversed;
}

template<class Third>
void display(Third toDisplay[], int arrSize) {

	for (int i = 0; i < arrSize; i++) {
		cout << "Element " << i << " of the array holds the value: " << toDisplay[i] << ".\n"; 
	}
	cout << "\n";
}
