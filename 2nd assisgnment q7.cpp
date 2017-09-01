#include <iostream>
using namespace std;

int main() {
	int angle1 , angle2;
	cout<< "enter the first angle ";
	cin >> angle1;
	cout << "enter the second angle" ;
	cin >> angle2;
	cout << "third angle is " << 180 - (angle1 + angle2)<<endl;
	return 0;
	
}