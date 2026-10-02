#include <stdio.h>

void main(){
	int num;
	printf("Enter the number to sum till: ");
	scanf("%d", &num);
	int sum;
	for (int i = 0; i <= num; i++){
		if (i % 2 != 0)
			sum += i;
	}	
	printf("%d is the sum of all the odd natural numbers till %d.\n", sum, num);
}
