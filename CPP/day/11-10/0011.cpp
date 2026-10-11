#include <iostream>
using namespace std;

class Person
{
	int age;
	string name;

	public:
	Person (int age, string name) :
		age(age), name(name) {}
	void displayPerson()
	{
		cout << "Name: " << name << endl ;
		cout << "Age: " << age << endl ;
	}

};

class Student : public Person
{
	int roll;
	float marks;

	public:
	Student (int age, string name, int roll, float marks)
		: Person(age, name), roll(roll), marks(marks)
	{}
	void displayStudent()
	{
		displayPerson();
		cout << "Roll Number: " << roll << endl;
		cout << "Student Marks: " << marks << endl;
	}

};

int main()
{
	Student S(20, "Rahul", 101, 85);
	S.displayStudent();
	return 0;
}
