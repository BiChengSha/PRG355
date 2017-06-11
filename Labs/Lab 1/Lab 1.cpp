#include<iostream>
#include<cmath>
using namespace std;

inline int tilesNeeded(double length, double width, double size);
inline double wastedArea(double length, double width, double size, int tiles);

int main() {
	double length, width, size1, size2, wasted1, wasted2;
	int tiles1, tiles2;

	cout << "Enter length of room: \n";
	cin >> length;
	cout << "Enter width of room: \n";
	cin >> width;
	cout << "Enter first square tile side length: \n";
	cin >> size1;
	cout << "Enter second square tile side length: \n";
	cin >> size2;

	tiles1 = tilesNeeded(length, width, size1);
	tiles2 = tilesNeeded(length, width, size2);
	wasted1 = wastedArea(length, width, size1, tiles1);
	wasted2 = wastedArea(length, width, size2, tiles2);

	cout << "The amount of tiles required to cover the floor is " << tiles1 << " using tile size 1.\n";
	cout << "The wasted area of the times is " << wasted1 << ".\n";
	cout << "The amount of tiles required to cover the floor is " << tiles2 << " using tile size 2.\n";
	cout << "The wasted area of the times is " << wasted2 << ".\n";

	if (wasted1 < wasted2) {
		cout << "Tile size 1 results in less waste.\n";
	} else if (wasted1 > wasted2) {
		cout << "Tile size 2 results in less waste.\n";
	} else {
		cout << "Both tile sizes create the same amount of waste.\n";
	}

	system("pause");
	return 0;
}

inline int tilesNeeded(double length, double width, double size) {
	int x;
	x = ceil(length / size) * ceil(width / size);
	return x;
}

inline double wastedArea(double length, double width, double size, int tiles) {
	double wasted = tiles*size*size - length*width;
	return wasted;
}