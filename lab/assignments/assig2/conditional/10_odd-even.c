#include <stdio.h>

void main(){
	
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("%d is ", num);
	if (num%2 == 0)
		printf("even\n");
	else
		printf("odd\n");
}
