#include <iostream>
using namespace std;

class Area
{
	public:
	
	int area(int side)
	{
		return side*side;
	}

	int area(int length, int width)
	{
		return length*width;
	}

	double area(double radius)
	{
		return radius * 3.14159 * radius;
	}
};

int main()
{
	Area A;
	int s, l, w;
	double r;

	cout << "Enter side of the squaure: ";
	cin >> s;

	cout << "Enter length of the rectangle: ";
	cin >> l;

	cout << "Enter width of the rectangle: ";
	cin >> w;

	cout << "Enter radius of the circle: ";
	cin >> r;


	cout << endl << "Calculating Area of shapes....." << endl;
	cout << "Area of Square: " << A.area(s) << endl;
	cout << "Area of Rectangle: " << A.area(l,w) << endl;
	cout << "Area of Circle: " << A.area(r) << endl;
	return 0;
}
