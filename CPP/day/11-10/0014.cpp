#include <iostream>
#include <string>

using namespace std;

class Academic
{
	float marks;

	public:
	void setMarks(float marks)
	{
	       this -> marks = marks;
	}
	float getMarks()
	{
		return marks;
	}
};

class Sports
{
	float marks;

	public:
	void setMarks(float marks)
	{
		this -> marks = marks;
	}

	float getMarks()
	{
		return marks;
	}
};

class Result : protected Academic, protected Sports
{
	public:
	Result()
	{
		float dmarks;
		cout << "Enter Academic Marks: ";
		cin >> dmarks;
		Academic :: setMarks(dmarks);

		cout << "Enter Sports Marks: ";
		cin >> dmarks;
		Sports :: setMarks(dmarks);
	}
	float calculateTotal()
	{
		return Academic :: getMarks() + Sports :: getMarks();
	}

	void display()
	{
		cout << "Total Marks are: " << this -> calculateTotal() << endl;
	}
};

int main()
{

	Result r;

	r.calculateTotal();
	r.display();
	return 0;
}
