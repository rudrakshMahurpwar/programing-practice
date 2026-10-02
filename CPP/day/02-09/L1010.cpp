#include <iostream>
using namespace std;

/* Take a character and check whether it's uppercase, lowercase, a digit, or a special character. */

int main(){
	char ch;
	cout << "Enter a character to compare: ";
	cin >> ch;


	if (ch >= 'A' && ch <= 'Z')
		cout << "Character is an Uppercase Character";
	else if (ch >= 'a' && ch <= 'z')
		cout << "Character is a Lowercase Character";
	else if (ch >= '0' && ch <='9')
		cout << "Character is Numeric Characater";
	else
		cout << "Character is a Special Character";
	cout << endl;
	return 0;
}
