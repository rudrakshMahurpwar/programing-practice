#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double a, double b)
{
	if (b == 0)
		throw runtime_error("Division by zero");
	return a/b;
}

int main()
{
	try
	{
		double d = divide(10,0);
		cout << "Division: " << d << endl;
	}
	catch (const exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	return 0;
}
