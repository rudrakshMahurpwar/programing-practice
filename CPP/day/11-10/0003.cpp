#include <iostream>
using namespace std;

class Demo
{
	int id;
	
	public:

	Demo(int id) : id(id)
	{
		cout << "Constructor: " << id << endl;
	}

	~Demo()
	{
		cout << "Destructor: " << id << endl;
	}
};

int main()
{
	cout << endl;
	Demo a(1), b(2), c(3);
	cout << endl;
	return 0;
}
