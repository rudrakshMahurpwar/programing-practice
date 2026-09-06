#include <stdio.h>

void main(){
	// Program to get last digit of a number in c.
	
	// taking a number to work on.
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Last digit of %d is %d.\n", num, num%10);
}
