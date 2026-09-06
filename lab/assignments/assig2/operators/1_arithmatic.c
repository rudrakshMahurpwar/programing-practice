#include <stdio.h>	

void main(){
	// Program to show use of arithematic operations.
	
	// Declaring and storing operands.
	int num1, num2;
	printf("Enter you two numbers: ");
	scanf("%d %d", &num1, &num2);

	// Performing operations using operands.
	printf("Addition: %d.\n", num1+num2);
	printf("Substraction: %d.\n", num1-num2);
	printf("Multiplicaion: %d.\n", num1*num2);
	printf("Division: %d.\n", num1/num2);
	printf("Modulus/Remider: %d.\n", num1%num2);
}
