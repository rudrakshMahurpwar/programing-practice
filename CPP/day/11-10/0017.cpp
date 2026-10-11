#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string name;
	int id;
	double basicSalary;

	public:
	Employee(string n, int id, double salary) :
		name(n), id(id), basicSalary(salary) {}
	virtual ~Employee() = default;
	virtual void calculateSalary() = 0;
	double getSalary()
	{
		return basicSalary;
	}
	virtual void display() const
	{
		cout << "Name: " << name << endl;
		cout << "ID: " << id << endl;
		cout << "Basic Salary: " << basicSalary << endl;
	}
};

class FullTimeEmployee : public Employee
{
	double salary;

	public:
	FullTimeEmployee(string n, int id, double s) :
		Employee(n, id, s), salary(0.0) {}
	
	void calculateSalary() override
	{
		float bonus;
		cout << "Enter Bonus: ";
		cin >> bonus;
		if (cin.fail() || bonus < 0){
			cout << "Invalid Bonus entered" << endl;
			return;
		}
		salary = getSalary() + bonus;
	}

	void display() override
	{
		cout << "DETAILS OF FULL TIME EMPLOYEE" << endl;
		Employee :: display();
		cout << "Total Salary: " << salary << endl;
	}

};

class PartTimeEmployee : public Employee
{
	int hours;
	double rate;
	double salary;

	public:
	PartTimeEmployee(string n, int id, double s) :
		Employee (n, id, s), salary(0.0) {}

	void calculateSalary() override
	{
		cout << "Enter hours: ";
		cin >> hours;
		if (cin.fail() || hours <= 0){
			cout << "Invalid data entered" << endl;
			return;
		}
		cout << "Enter Rate: ";
		cin >> rate;
		if (cin.fail() || rate < 0)
		{
			cout << "Rate is Invalid" << endl;
			return;
		}
		salary = hours * rate;
	}

	void display()
	{
		cout << "DETAILS OF PART TIME EMPLOYEE" << endl;
		Employee :: display();
		cout << "Total Salary: " << salary << endl;
	}
};

int main()
{
	Employee* ptr;

	string name;
	int id;
	double sal;

	cout << "Enter Employee Name: ";
	getline(cin, name);
	cout << "Enter Employee ID: ";
	cin >> id;
	cout << "Enter Employee Basic Salary: ";
	cin >> sal;
	
	PartTimeEmployee PE(name, id, sal);
	FullTimeEmployee TE(name, id, sal);

	ptr = &PE;
	ptr -> calculateSalary();
	
	ptr = &TE;
	ptr -> calculateSalary();

	ptr = &PE;
	ptr -> display();

	ptr = &TE;
	ptr -> display();
	return 0;
}
