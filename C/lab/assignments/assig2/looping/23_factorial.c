#include <stdio.h>

void main(){
	int num;
	printf("Enter the number you want tp find the factorial of: ");
	scanf("%d", &num);
	int fact = 1;
	for (int i = num; i > 1; i--)
		fact *= i;
	printf("The factorial of %d is %d.\n", num, fact);
}
