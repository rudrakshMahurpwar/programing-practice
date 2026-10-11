#include <iostream>
using namespace std;

class BankAccount
{
	double balance;

	public:
	BankAccount () : balance(3000) {}
	
	void withdraw(double amount)
	{
		if (amount < 0)
			throw runtime_error("Amount cannot be negative");
		else if(amount > balance)
			throw runtime_error("Insufficient Balance");
		balance -= amount;
	}
	void display()
	{
		cout << "Final balance: " << balance << endl;
	}
};

int main()
{
	double a;
	cout << "Enter amount to withdraw: ";
	try
	{
		cin >> a;
		if (cin.fail())
			throw runtime_error("Invalid amount");
		BankAccount bank;
		bank.withdraw(a);
		bank.display();
	}
	catch (const exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	return 0;
}
