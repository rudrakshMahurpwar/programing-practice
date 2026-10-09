#include <iostream>
using namespace std;

void callValue(int num1, int num2, int num3);
void callReference(int &num1, int &num2, int &num3);
void takeInput(int *num);
void displayNumbers(int *num1, int *num2, int *num3);

int main()
{
	int num1, num2, num3;
	takeInput (&num1);
	takeInput (&num2);
	takeInput (&num3);

	cout << endl << "Values entered" << endl;
	displayNumbers(&num1, &num2, &num3);

	cout << endl << "Calling function by value" << endl;
	callValue(num1, num2, num3);

	cout << endl << "Displaying values after Call by Value function" << endl;
	displayNumbers(&num1, &num2, &num3);

	cout << endl << "Calling function by reference" << endl;
	callReference(num1, num2, num3);

	cout << endl << "Displaying values after Call by Reference function" << endl;
	displayNumbers(&num1, &num2, &num3);

	return 0;
}

void callValue(int num1, int num2, int num3)
{
	cout << endl << "Displaying values in Call by Value function" << endl;
	displayNumbers(&num1, &num2, &num3);

	num1 = num1 + num2 + num3;
	num3 = num1 - num2 - num3;
	num2 = num1 - num2 - num3;
	num1 = num1 - num2 - num3;

	cout << endl << "Displaying values after swapping in  Call by Value function" << endl;
	displayNumbers(&num1, &num2, &num3);

}

void callReference(int &num1, int &num2, int &num3)
{
	cout << endl << "Displaying values in Call by Reference function" << endl;
	displayNumbers(&num1, &num2, &num3);

	num1 = num1 + num2 + num3;
	num3 = num1 - num2 - num3;
	num2 = num1 - num2 - num3;
	num1 = num1 - num2 - num3;

	cout << endl << "Displaying values after swapping in Call by Reference function" << endl;
	displayNumbers(&num1, &num2, &num3);

}

void takeInput(int *num)
{
    while (true)
    {
        cout << "Enter number: ";
        cin >> *num;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Invalid input! Please enter an integer." << endl;
        }
        else
        {
            break;
        }
    }
}

void displayNumbers(int *num1, int *num2, int *num3)
{
	cout << "Number 1: " << *num1 << endl;
	cout << "Number 2: " << *num2 << endl;
	cout << "Number 3: " << *num3 << endl;
}
