#include <iostream>
#include <string>
using namespace std;

class Person;
class Employee;
class Manager;

class Person
{
	string name;

	public:
	Person(string name) : name(name) {}

	void displayPerson()
	{
		cout << "Name: " << name << endl;
	}
};

class Employee : public Person
{
	int employeeId;
	double salary;

	public:
	Employee(string name, int id, double salary) :
		Person(name), employeeId(id), salary(salary)
	{}

	void displayEmployee()
	{
		displayPerson();
		cout << "Employee ID: " << employeeId << endl;
		cout << "Salary: " << salary << endl;
	}
};

class Manager : public Employee
{
	string department;

	public:
	Manager(string name, int id, double salary, string dept)
		: Employee(name, id, salary),
		department(dept) {}

	void displayManager()
	{
		displayEmployee();
		cout << "Department: " << department << endl;
	}
};

int main()
{
	string n, d;
	int id;
	double salary;

	cout << "Enter Name: ";
	cin >> n;
	
	cout << "Enter Employee ID: ";
	cin >> id;

	cout << "Enter Salary: ";
	cin >> salary;

	cout << "Enter Department: ";
	cin >> d;

	Manager M(n, id, salary, d);

	cout << endl << "Displaying Employee Details: " << endl;
	M.displayManager();	
	return 0;
}	
