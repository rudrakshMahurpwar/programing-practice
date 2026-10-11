#include <iostream>
using namespace std;

class Rectangle 
{
	int length;
	int width;

	public:
	Rectangle () : length(1), width(1) {}

	Rectangle (int l, int w)
	{
		this -> length = l;
		this -> width = w;
	}

	double area()
	{
		return this -> length * this -> width;
	}

	double perimeter()
	{
		return 2 * (length + width);
	}

	void display()
	{
		cout << "Length: " << length << endl;
		cout << "Width: " << this -> width << endl;
		cout << "Area: " << area() << endl;
		cout << "Perimeter: " << this -> perimeter() << endl;
	}
};

int main()
{
	int l, w;
	cout << "Enter Length: ";
	cin >> l;
	cout << "Enter Width: ";
	cin >> w;

	Rectangle R;
	Rectangle RP(l, w);

	cout << endl << "Output of first object: " << endl;
	R.display();

	cout << endl << "Output of second object: " << endl;
	RP.display();

	return 0;
}
