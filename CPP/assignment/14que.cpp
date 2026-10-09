#include <iostream>
using namespace std;

class BankAccount
{
	long int accountNumber;
	string accountHolderName;
	double balance;

	public:
	BankAccount(string name, double balance) :
		accountHolderName(name), balance(balance) {};
	~BankAccount()
	{
		cout << "Closing Bank Account" << endl;
	}
	void deposit(double amount);
	void withdraw(double amount);
	double getBalance();
};

void BankAccount :: deposit(double amount)
{
	try
	{
		if (amount < 0)
			throw "Amount entered is negative";
		else balance += amount;
	}
	catch (const char *message)
	{
		cout << "Error: " << message << endl;
	}
}

void BankAccount :: withdraw(double amount)
{
	try
	{
		if (amount < 0)
			throw "Amount entered is negative";
		else if (balance - amount < 0)
			throw "Account Balance Low";
		else balance -= amount;
	}
	catch (const char *message)
	{
		cout << "Error: " << message << endl;
	}

}

double BankAccount :: getBalance()
{
	return balance;
}

int main()
{
	string name;
	double initialBalance;

	cout << "Enter name of account Holder: ";
	getline(cin, name);

	cout << "Enter Initial Balance of account: ";
	cin >> initialBalance;

	BankAccount bank(name, initialBalance);
	int op;
	do
	{
		cout << endl <<
			"1. Deposit" << endl <<
			"2. Withdraw" << endl <<
			"3. Display Balance" << endl <<
			"0. Exit" << endl <<
			"Enter Choice (1/2/3/0): ";
		cin >> op;

		switch(op)
		{
			case 1:
				cout << "Enter amount to enter: ";
				cin >> initialBalance;
				bank.deposit(initialBalance);
				break;
			case 2:
				cout << "Enter amount to withdraw: ";
				cin >> initialBalance;
				bank.withdraw(initialBalance);
				break;
			case 0:
			case 3:
				cout << "Account Balance: " << bank.getBalance() << endl;
				break;
			default:
				cout << "Invalid choice" << endl;
		}
	}while (op);

	return 0;
}
