#include <iostream>
using namespace std;

class Person
{
	int age;

	public:
	Person() : age(0) {}

	bool setAge(int age)
	{
		if (age >= 0)
		{
		this -> age = age;
		return true;
		}

		return false;
	}

	int getAge()
	{
		return age;
	}
};

int main()
{
	Person P;
	int age, inst;

	do
	{
		cout << endl <<
		"1. Set Age" << endl <<
		"2. Get Age" << endl
		<< "0. Exit" << endl;
		cout << "Enter operation to perform: ";
		cin >> inst;

		switch(inst)
		{
			case 1:
				cout << "Enter age to store: ";
				cin >> age;
				(P.setAge(age)) ?
					cout << " " :
					cout << "Invalid Age";
				cout << endl;
				break;
			case 2:
				cout << "Age: " << P.getAge() << endl;
				break;
			case 0:
				break;
			default:
				cout << "Invalid Choice";
		}
	} while (inst);
	return 0;
}
