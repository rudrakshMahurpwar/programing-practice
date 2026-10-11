#include <iostream>
using namespace std;

class Student
{
	int roll;
	string name;

	public:
	Student(int roll, string name) : roll(roll), name(name) {}

	bool operator==(const Student & S) const
	{
		if (this -> roll == S.roll)
			return true;
		return false;
	}

};

int main()
{
	Student s1(101, "Rahul");
	Student s2(101, "Priya");
	Student s3(102, "Amit");

	cout << "s1 == s2: ";
	(s1 == s2) ?
		cout << "Equal" :
		cout << "Not Equal" ;
	cout << endl;
	cout << "s1 == s3: ";
	(s1 == s3) ?
		cout << "Equal" :
		cout << "Not Equal" ;
	cout << endl;
	return 0;
}
