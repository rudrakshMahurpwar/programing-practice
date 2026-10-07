#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
	long int accountNumber;
	string accountHolder;
	double balance;

	public:
	BankAccount(long int accountNumber)
	{
		this -> accountNumber = accountNumber;
		this -> balance = 500;
	}
	void createAccount();
	void deposit();
	void withdraw();
	void displayBalance();
	void display();
	~BankAccount(){
		cout << "Destroying the Object for " << this -> accountHolder << endl;
	};
};

void BankAccount :: createAccount()
{
	float amount;
	cout << "Enter Account Holder name: ";
	getline(cin, this -> accountHolder);
	cout << "Enter Initial balance: ";
	cin >> amount;
	cin.ignore(1000, '\n');
	if (amount < 0)
	{
		cout << "Initial Balance entered is negative."
			<< endl << "Intial Account Balance is 500" << endl;
		return;
	}
	this -> balance = amount;
}

void BankAccount :: deposit()
{
	double amount;
	while (true)
	{
		cout << "Enter the amount you want to deposit: ";
		cin >> amount;
		cin.ignore(1000, '\n');
		if (amount > 0)
		{
			this -> balance += amount;
			return;
		}
		else if (amount == 0)
			return;
		cout << "Please Enter a positve number to deposit or enter 0 to discard operation" << endl;
	}
}

void BankAccount :: withdraw()
{
	double amount;
	while(true)
	{
		cout << "Enter the amount to withdraw: ";
		cin >> amount;
		cin.ignore(1000, '\n');
		if (amount == 0)
			return;
		else if (amount < 0)
		{
			cout << "Withdraw amount should be a positive number."
				<< endl << "Enter 0 to discard the operation." << endl;
			continue;
		}
		else if (this -> balance - amount < 0)
		{
			cout << "Current balance is less than Withdraw amount."
				<< endl << "Enter 0 to discard the operation." << endl;
			continue;
		}
		this -> balance -= amount;
		return;
	}
}

void BankAccount :: display()
{
	cout << endl << "Account Holder Name: " << this -> accountHolder << endl;
	cout << "Account Number: " << this -> accountNumber << endl;
	cout << "Account balance: " << this -> balance << endl;
}

void BankAccount :: displayBalance()
{
	cout << "Current balance is " << this -> balance << endl;
}
int main()
{
	long int aNumber;
	int op;

	cout << "Enter Account Number: ";
	cin >> aNumber;
	cin.ignore(1000, '\n');
	BankAccount  bank(aNumber);
	bank.createAccount();

	do{
		cout << endl << "===== MENU ====" << endl
			<< "1: Display Account Details" << endl
			<< "2: Deposit Amount" << endl
			<< "3: Withdraw Amount" << endl
			<< "4: Display Current Balance" << endl
			<< "0: Exit Program" << endl;
		cout << "Enter Operation to Perform (1/2/3/4/0): ";
		cin >> op;
		cin.ignore();

		switch(op)
		{
			case 1:
				bank.display();
				break;
			case 2:
				bank.deposit();
				break;
			case 3:
				bank.withdraw();
				break;
			case 4:
				bank.displayBalance();
				break;
			case 0:
				cout << "Exiting Program" << endl;
				break;
			default:
				cout << "Invaid Operation" << endl;
		}
	} while(op);

	return 0;
}

