#include<iostream>
using namespace std;

int main(){
	bool a;
	int b;
	float c;
	double d;
	char e;

	// input of basic data types
	cout << "Enter a boolean value: ";
	cin >> a;
	
	cout << "Enter an integer value: ";
	cin >> b;

	cout << "Enter a floating point value: ";
	cin >> c;

	cout << "Enter a double floating point value: ";
	cin >> d;

	cout << "Enter a character value: ";
	cin >> e;

	cout << endl;

	// output of basic data types
	cout << "Boolean value: " << a << endl;
	cout << "Integer value: " << b << endl;
	cout << "Floating point value: " << c << endl;
	cout << "Double floating point value: " << d << endl;
	cout << "Character value: " << e << endl;

	cout << endl;

	return 0;
}
