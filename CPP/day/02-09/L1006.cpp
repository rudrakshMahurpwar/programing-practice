#include <iostream>
using namespace std;

/* Take two numbers and print the larger one  */

int main(){
	int num1, num2;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	(num1 > num2) ?
		cout << "First number is Larger" :
		cout << "Second number is Larger" ;
	cout << endl;
	return 0;
}
