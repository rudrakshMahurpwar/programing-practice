#include <iostream>

using namespace std;

/* Take three numbers and print the Largest. */

int main(){
	int num1, num2, num3;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	cout << "Enter third number: ";
	cin >> num3;

	if (num1 < num2)
		num1 = num2;
	if (num1 < num3)
		num1 = num3;

	cout << "Largest of number of the three is: " << num1 << endl;

	return 0;
}
