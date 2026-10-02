#include <iostream>
using namespace std;

/* Check if a given year is a leap year. */

int main(){
	int numb;
	cout << "Enter the year to check for leap: ";
	cin >> numb;

	((numb % 4 == 0 && numb % 100 != 0)  || (numb % 400 == 0)) ?
		cout << "Given year is A Leap Year" :
		cout << "Given year is not a Leap Year" ;

	cout << endl;
	return 0;
}
