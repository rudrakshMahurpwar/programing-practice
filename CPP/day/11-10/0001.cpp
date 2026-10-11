#include <iostream>
using namespace std;

class Student
{
	int roll;
	string name;
	double marks;

	public:
	void input()
	{
		cout << endl;
		cout << "Enter Student Name: ";
		getline(cin, name);
		cout << "Enter " << name << "'s Roll number: ";
		cin >> roll;
		cout << "Enter " << name << "'s marks: ";
		cin >> marks;
		cin.ignore(10000, '\n');
	}

	void display()
	{
		cout << "Roll Number: " << roll;
		cout << "Name: " << name;
		cout << "Marks: " << marks;
	}
};

int main()
{
	int n = 3;
	Student s[n];
	
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter details of student " << i << ": " << endl;
		s[i].input();
	}
	cout << endl;
	
	cout << "Student Details: " << endl;
	for (int i = 0; i < n; i++)
	{
		s[i].display();
		cout << endl;
	}
	return 0;
}
