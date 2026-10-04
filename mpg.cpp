#include <iostream>

using namespace std;

int main() {
	const double GALLONS = 16.0;
	const double MILES = 312.0;
	double miles_per_gallon = MILES / GALLONS;

	cout << "Miles per gallon: " << miles_per_gallon << " MPG" << endl;

	return 0;
}
