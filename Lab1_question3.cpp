#include<iostream>
using namespace std;

int main(){
	float firstNumber, secondNumber;

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;


	cout << "The sum is: " << firstNumber + secondNumber << "." << endl;
	cout << "The difference is: " << firstNumber - secondNumber << "." << endl;
	cout << "The product is: " << firstNumber * secondNumber << "." << endl;
	cout << "The quotient is: " << firstNumber / secondNumber << "." << endl;

	return 0;
}
