#include <iostream>
using namespace std;

class Complex
{
	int real;
	int imag;

	public:
	Complex(int real, int imag) :
		real(real), imag(imag) {};

	Complex() {}

	~Complex() {}

	Complex operator+(const Complex & obj)
	{
		return Complex(real + obj.real, imag + obj.imag);
	}

	int getReal()
	{
		return real;
	}

	int getImag()
	{
		return imag;
	}
};

int main()
{
	Complex c1(2,3), c2(4,5);
	Complex c3 = c1 + c2;

	cout << c3.getReal() << " + " <<  c3.getImag() << "i" << endl;
	return 0;
}
