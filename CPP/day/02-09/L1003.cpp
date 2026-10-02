#include <iostream>
using namespace std;

/* Check if a number is divisible by 5 */


int main(){
	int numb;
	cout << "Enter a number to check divisibility by 5: ";
	cin >> numb;

	(numb % 5 == 0) ?
		cout << "Number is divisible by 5" :
		cout << "Number is not divisible by 5" ;

	cout << endl;
	return 0;
}
