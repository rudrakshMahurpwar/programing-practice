#include <stdio.h>

void main(){
	// Program to swap the variables.

	// Taking the input variables.
	int num1, num2;
	printf("Enter the variables: ");
	scanf("%d %d", &num1, &num2);

	printf("Before swaping\nvar1: %d\nvar2: %d\n", num1, num2);
	// Performing swap
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;


	printf("After swaping\nvar1: %d\nvar2: %d\n", num1, num2);

}
