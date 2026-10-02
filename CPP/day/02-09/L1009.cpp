#include <iostream>
using namespace std;

/* Take a character and check if it's a vowel or consonant. */

int main(){
	char ch;
	cout << "Enter a character to compare: ";
	cin >> ch;

	switch(ch){
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
			cout << "Character is a vowel";
			break;
		default :
			cout << "Character is a consonant";
	}
	cout << endl;
	return 0;
}
