#include <iostream>
using namespace std;

class Number
{
	int num1;
	int num2;

	public:
	void input()
	{
		cout << "Enter First Number: ";
		cin >> num1;
		cout << "Enter Second Number: ";
		cin >> num2;
	}
	void display(){
		cout << endl << "First Number: " << num1 << endl;
		cout << "Second Number: " << num2 << endl;
	}
	friend void findGreater(Number &N);
};

void findGreater(Number &N)
{
	(N.num1 > N.num2) ?
		cout << N.num1 << " is greater than " << N.num2 << endl :
		cout << N.num2 << " is greater than " << N.num1 << endl ;
}

int main()
{
	Number n;
	n.input();
	n.display();
	findGreater(n);
	return 0;
}
