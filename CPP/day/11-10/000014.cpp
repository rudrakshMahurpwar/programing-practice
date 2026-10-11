#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
T maximum(T num1, T num2)
{
	return (num1 > num2) ? num1 : num2 ;
}

template <typename T>
T divide(T num1, T num2)
{
	if (num2 == 0)
		throw runtime_error("Division by zero");
	return num1/num2;
}

int main()
{
	cout << "Maximum integer: " << maximum<int>(10, 20) << endl;
	cout << "Maximum double: " << maximum<double>(2.5,4.5) << endl;
	
	try
	{
		double d = divide<double> (10, 0);
		cout << "Division: " << d << endl;
	}
	catch (const exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	return 0;
}
