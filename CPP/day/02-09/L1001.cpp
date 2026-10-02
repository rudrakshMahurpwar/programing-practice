#include <iostream>
using namespace std;

/* Take a number and print whether it’s positive, negative, or zero. */

int main(){
	int numb;
	cout << "Enter a number to check: ";
	cin >> numb;
	if (numb > 0)
		cout << "The Entered number is positive";
	else if (numb < 0)
		cout << "The Entered number is negative";
	else if (numb == 0)
		cout << "The Entered number is Zero";
	cout << endl;
	return 0;
}
