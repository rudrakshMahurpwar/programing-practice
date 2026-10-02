#include <stdio.h>

void main(){
	// Program to printf maximum and minumn of two numbers.
	
	int num1, num2;
	printf("Enter 2 numbers:");
	scanf("%d %d", &num1, &num2);
	
	int max, min;
	max = (num1>num2) ? num1 : num2;
	min = (num1>num2) ? num2 : num1;

	printf("Maximum of two numbers is %d.\n", max);
	printf("Minimum of two numbers is %d.\n", min);
}
