#include <iostream>
using namespace std;

class Student
{
	int rollNo;
	string name;
	float marks;

	public:

	Student (int rollNo, string name, float marks)
	{
		this -> rollNo = rollNo;
		this -> name = name;
		this -> marks = marks;
	}

	Student (Student &copy)
	{
		this -> rollNo = copy.rollNo;	
		this -> name = copy.name;
		this -> marks = copy.marks;
	}

	~Student() {}

	void displayDetails()
	{
		cout << "Student Name: " << this -> name << endl;
		cout << "Student Roll Number: " << this -> rollNo << endl;
		cout << "Student Marks: " << this -> marks << endl;
	}
};

int main()
{
	int roll;
	string name;
	float marks;

	cout << "Enter Student Name: ";
	getline(cin, name);
	cout << "Enter Student Roll Number: ";
	cin >> roll;
	cout << "Enter Student Marks: ";
	cin >> marks;

	Student obj1(roll, name, marks);
	Student obj2(obj1);

	cout << endl << "===== DISPLAYING DETAILS OF FIRST OBJECT ====" << endl;
	obj1.displayDetails();
	cout << endl << "===== DISPLAYING DETAILS OF SECOND OBJECT ====" << endl;
	obj2.displayDetails();

	return 0;
}
