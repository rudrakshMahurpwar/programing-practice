#include <iostream>
using namespace std;

class BankAccount
{
	double balance;

	public:
	
	BankAccount (double amount) : balance(amount) {}

	bool deposit(double amount)
	{
		if (amount <= 0)
			return false;
		balance += amount;
		return true;
	}

	bool withdraw(double amount)
	{
		if (amount <= 0 || balance - amount < 0)
			return false;
		balance -= amount;
		return true;
	}

	void displayBalance() const
	{
		cout << "Balance: " << balance << endl;
	}

	~BankAccount() {}
};

int main()
{
	double bal = 1000;

	BankAccount bank(bal);

	int i;
	do
	{
		cout << endl
		<< "0. Exit" << endl
		<< "1. Deposit" << endl
		<< "2. Withdraw" << endl
		<< "3. Display" << endl
		<< "Enter choice: ";
		cin >> i;
		switch(i)
		{
		case 1:
			cout << "Enter amount to deposit: ";
			cin >> bal;
			(bank.deposit(bal)) ?
				cout << "Amount deposited." :
				cout << "Amount " << bal << " cannot be deposited";
			cout << endl;
			break;
		case 2:
			cout << "Enter amount to withdraw: ";
			cin >> bal;
			(bank.withdraw(bal)) ?
				cout << "Transaction Complete." :
				cout << bal << " amount can't be withdrawn";
			cout << endl;
			break;
		case 0:
		case 3:
			displayBalance();
			break;
		default:
			cout << "Invalid choice" << endl;
		}
	}while (i);
	return 0;
}
