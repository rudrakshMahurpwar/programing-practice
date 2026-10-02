#include <stdio.h>

void main(){
	// Program to show how we get the remainder in c.
	
	// taking a number to work on.
	int num1, num2;
	printf("Enter a numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("Remainder of %d and %d is %d.\n", num1, num2, num1%num2);
}
