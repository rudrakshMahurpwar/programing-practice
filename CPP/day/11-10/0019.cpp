#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maximum(T num1, T num2)
{
	return (num1 > num2) ?
		num1 : num2;	
}

int main()
{
	cout << "Demonstrating Integer " ;
	cout << maximum<int> (10, 20) << endl;
	cout << "Demonstrating Double " ;
	cout << maximum<double> (10.4, 30.2) << endl;

	return 0;
}
