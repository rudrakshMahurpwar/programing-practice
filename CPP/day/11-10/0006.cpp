#include <iostream>
using namespace std;

class Distance
{
	double meters;

	public:
	Distance(double meters) : meters(meters) {}

	friend void addDistance(Distance one, Distance two);
};

int main()
{
	Distance d1(10), d2(20);
	addDistance(d1,d2);
	return 0;
}

void addDistance(Distance one, Distance two) 
{
	cout << "Total distance: " <<
		one.meters + two.meters << 
		" meters" << endl;
}
