#include <iostream>
using namespace std;

class Shape
{
	public:
	Shape() {}
	virtual double area() = 0;
	virtual ~Shape() = default;
};

class Circle : public Shape
{
	double radius;

	public:
	Circle (double r) : radius(r) {}
	double area() override
	{
		return 3.14159 * radius * radius;
	}
};

class Rectangle : public Shape
{
	double length;
	double width;

	public:
	Rectangle (double l, double w) :
		length (l), width(w) {}
	double area() override
	{
		return length * width;
	}
};

int main()
{
	double r, l, w;

	cout << "Enter radius of the circle: ";
	cin >> r;

	cout << "Enter length of the Rectangle: ";
	cin >> l;

	cout << "Enter width of the Rectangle: ";
	cin >> w;

	Shape* ptr;

	Circle C(r);
	Rectangle R(l,w);

	cout << endl << "Calculating Area of Shapes..." << endl;
	ptr = &C;
	cout << "Area of Circle: " <<
	ptr -> area() << endl;

	ptr = &R;
	cout << "Area of Rectangle: " << 
	ptr -> area() << endl;
}
