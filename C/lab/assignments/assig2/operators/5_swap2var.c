#include <stdio.h>

int main(){
	// Program to swap variables with only two integers.
	
	// Taking the numbers
	int num1, num2;
	printf("Enter your variables: ");
	scanf("%d %d", &num1, &num2);

	printf("Before swap var1: %d var2: %d.\n", num1, num2);
	// Performing swap
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("Before swap var1: %d var2: %d.\n", num1, num2);
}
