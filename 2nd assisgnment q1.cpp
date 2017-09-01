#include <iostream>
using namespace std;

int main() {
	double length_cm;
	cout << "This is a centimeter to meter converter \n Please enter a measure in centimeter to convert in meter" <<endl;
	cin >> length_cm;
	cout << " \n the length you entered is " << length_cm/100 << " " << "meter";
	return 0;
}