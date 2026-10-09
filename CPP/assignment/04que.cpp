#include <iostream>
using namespace std;

int main()
{
	int units;
	double billAmount, surcharge, finalAmount;
	units = billAmount = surcharge = finalAmount = 0;
	cout << "Enter the units consumed: ";
	cin >> units;

	if (units <=0)
	{
		cout << "Units entered is not a positive number" << endl;
		goto zero;
	}

	switch ((units - 1) / 100)
	{
		case 0:
			billAmount = units * 5;
			break;
		case 1:
			billAmount = 500 + ((units - 100) * 7);
			break;
		case 2:
			billAmount = 1200 + ((units - 200) * 10);
			break;
		default:
			billAmount = 2200 + ((units - 300) * 15);
			break;
	}

	if (billAmount > 3000)
		surcharge = billAmount * 0.1;
	finalAmount = surcharge + billAmount;

zero:
	cout << endl << "Units Consumed: " << units << endl;
	cout << "Basic Bill Amount: " << billAmount << endl;
	cout << "Surcharge: " << surcharge << endl;
	cout << "Final Payable Amount: " << finalAmount << endl;
	return 0;
}
