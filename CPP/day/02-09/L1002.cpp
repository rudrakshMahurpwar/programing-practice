#include <iostream>

/* Check if number is even or odd */

int main(){
	int numb;
	std :: cout << "Enter a number to check: ";
	std :: cin >> numb;

	(numb % 2 == 0) ?
		std :: cout << "Number is even" :
		std :: cout << "Number is odd" ;
	std :: cout << std :: endl;
	return 0;
}
