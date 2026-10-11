#include <iostream>
#include <string>
using namespace std;

class Person
{
	protected:
		int age;

};

class Student : protected Person
{
	public:
		void setAge(int age)
		{
			this -> age = age;
		}

		void displayAge()
		{
			cout << "Age: " << age << endl;
		}
};

int  main()
{
	int a;
	cout << "Input Age: ";
	cin >> a;
	if (cin.fail() || a < 0)
	{
		cout << "Invalid age" << endl;
		return 1;
	}
	Student S;
	S.setAge(a);
	S.displayAge();
	return 0;
}
