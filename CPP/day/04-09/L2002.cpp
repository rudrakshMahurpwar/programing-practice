#include <iostream>
using namespace std;

/* If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene. */ 
int main(){
	int s1, s2, s3;

	cout << "Enter side 1: ";
	cin >> s1;

	cout << "Enter side 2: ";
	cin >> s2;

	cout << "Enter side 3: ";
	cin >> s3;
	
	if (!(((s1 + s2) > s3) && ((s2 + s3) > s1) && ((s1 + s3) > s2))){
		cout << "Invalid" << endl;
		return -1;
	}

	if ((s1 == s2) && (s2 == s3))
		cout << "Equilateral";
	else if ((s1 == s2) || (s2 == s3) || (s1 == s3))
		cout << "Isosceles";
	else
		cout << "Scalene";
	cout << endl;
	return 0;
}
