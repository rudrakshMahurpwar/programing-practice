#include <iostream>
using namespace std;

class Number
{
	int num1;
	int num2;

	void setNumbers();
	void getNumbers();

	public:
	friend void swapNumbers(Number &N);
};

void Number :: setNumbers()
{
	cout << "Enter First Number: ";
	cin >> this -> num1;
	cout << "Enter Second Number: ";
	cin >> this -> num2;
}

void Number :: getNumbers()
{
	cout << endl << "First Number: " << num1 << endl;
	cout << "Second Number: " << num2 << endl;
}
void swapNumbers(Number &N)
{
	N.setNumbers();
	int temp;
	temp =  N.num1;
	N.num1 = N.num2;
	N.num2 = temp;
	cout << endl << "Displaying  Numbers After Swapping" << endl;
	N.getNumbers();
}

int main()
{
	cout << "Example Program for Friend Function" << endl;

	Number N;
	swapNumbers(N);

	return 0;
}
