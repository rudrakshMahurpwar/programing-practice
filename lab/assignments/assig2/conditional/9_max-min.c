#include <stdio.h>

void main(){
	// Program to print maximum and minimum of three numbers.
	
	int num1, num2, num3;
	printf("Enter 3 numbers to compare: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	int max, min;
	
	if (num1 > num2 && num1 > num3)
		max = num1;
	else if (num2 > num1 && num2 > num3)
		max = num2;
	else
		max = num3;
	
	if (num1 < num2 && num1 < num3)
		min = num1;
	else if (num2 < num1 && num2 < num3)
		min = num2;
	else
		min = num3;

	printf("Maximum of Three is %d.\n", max);
	printf("Minimum of Three is %d.\n", min);
}
