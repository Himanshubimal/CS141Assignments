#include<iostream>
using namespace std;


int main(){
	float length, breadth;

	cout << "Enter the breadth: ";
	cin >> breadth;

	cout << "Enter the length: ";
	cin >> length;

	cout << endl << "The perimeter is: " << 2*(length+breadth) << " units." << endl << endl;

	return 0;
}
