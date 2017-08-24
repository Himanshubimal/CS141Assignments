#include<iostream>
using namespace std;

int main(){
	float diameter, radius, circumference, area;

	cout << "Enter the diameter of the circle: ";
	cin >> diameter;
	cout << endl;

	radius = diameter/2;
	circumference = pi*diameter;
	area = pi*radius*radius;

	cout << "The circle has radius: " << radius << " units." << endl;
	cout << "The circle has circumference: " << circumference << " units." << endl;
	cout << "The circle has area: " << area << " square units." << endl;

	return 0;
}
