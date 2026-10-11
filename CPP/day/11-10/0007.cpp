#include <iostream>
using namespace std;

class Demo
{

	public:
	static int count;
	Demo(){
		count++;
	}

	static void showCount()
	{
		cout << "Number of objects: " << Demo :: count << endl;
	}

};

int Demo :: count = 0;

int main ()
{
	Demo a, b, c;
	Demo :: showCount();
	Demo d;
	Demo :: showCount();
	return 0;
}
