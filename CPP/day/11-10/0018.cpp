#include <iostream>
using namespace std;

class Base
{
	public:
		virtual ~Base()
		{
			cout << "Base Destructor" << endl;
		}
};

class Derived : public Base
{
	public: 
		virtual ~Derived()
		{
			cout << "Derived Destructor" << endl;
		}
};

int main()
{
    Base* dd = new Derived();

    delete dd;

    return 0;
}
