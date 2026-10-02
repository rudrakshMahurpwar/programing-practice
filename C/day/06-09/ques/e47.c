#include <stdio.h>

int main(void){
	// Write a program to enter 10 numbers and find the largest number
	int num, largest = 0;
	for (int i = 0; i < 10; i++){
		printf("Enter number: "); scanf("%d", &num);
		if (num > largest) largest = num;
	}
	printf("Your entered largest number is %d.\n", largest);
}
