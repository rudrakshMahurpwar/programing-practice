#include <stdio.h>

void main(){

	int num1, num2;
	char op;

	printf("Enter your numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("Enter the operation (+,-,/,*,%%): ");
	scanf(" %c", &op);

	switch(op){
		case '+': 
			printf("%d",num1+num2);
			break;
		case '-': 
			printf("%d",num1-num2);
			break;
		case '*': 
			printf("%d",num1*num2);
			break;
		case '/': 
			printf("%d",num1/num2);
			break;
		case '%': 
			printf("%d",num1%num2);
			break;
	}
	printf("\n);
}
