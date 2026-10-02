#include <iostream>
using namespace std;

/* Take a temperatur value and print "Cold", "Warm" or "Hot" using the range conditions */

int main(){
	float temperature;

	cout << "Enter the temperature: ";
	cin >> temperature;

	if (temperature <= 15)
		cout << "Temperature is Cold";
	else if (temperature > 15 && temperature <= 35)
		cout << "Temperature is Warm";
	else if (temperature > 35)
		cout << "Temperature is Hot";
	cout << endl;
	return 0;
}
