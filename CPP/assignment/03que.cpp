#include <iostream>
using namespace std;

class Volume
{
	public:
	float calculate(float length);
	float calculate(float radius, float height);
	float calculate(float length, float width, float height);
};

float Volume :: calculate(float length)
{
	return length * length * length;
}

float Volume :: calculate(float radius, float height)
{
	return 3.14 * radius * radius * height;
}

float Volume :: calculate(float length, float width, float height)
{
	return length * width * height;
}

int main()
{
	int op;
	float l, h, w, r;
	Volume v;
	do
	{
		cout << endl << "##### MENU #####" << endl <<
		"0. Exit" << endl <<
		"1. Cube" << endl <<
		"2. Cylinder" << endl <<
		"3. Rectangular Box" << endl <<
		"Calculate VOLUME of (1/2/3/0): ";
		cin >> op;
		cin.ignore(1000,'\n');

		switch (op)
		{
			case 1:
				cout << "Enter length of the CUBE: ";
				cin >> l;
				cout << "Volume of CUBE is: " << v.calculate(l) << endl;
				break;
			case 2:
				cout << "Enter radius of CYLINDER: ";
				cin >> r;
				cout << "Enter height of CYLINDER: ";
				cin >> h;
				cout << "Volume of CYLINDER is: " << v.calculate(r,h) << endl;
				break;
			case 3:
				cout << "Enter length of the CUBOID: ";
				cin >> l;
				cout << "Enter width of the CUBOID: ";
				cin >> w;
				cout << "Enter height of the CUBOID: ";
				cin >> h;
				cout << "Volume of CUBOID is: " << v.calculate(l, w, h) << endl;
				break;
			case 0:
				break;
			default:
				cout << "Invalid Choice" << endl;

		}
	} while (op);
	return 0;
}

