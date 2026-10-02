#include <stdio.h>

void main(){
	int num, digit;
	printf("Enter the number you want count the digits of: ");
	scanf("%d", &num);
	int sum = 0 ;

	
	while (num > 0){
		digit = num % 10;
		sum += digit;
		num /= 10;
	}


	printf("The sum digits in your number is %d.\n", sum);
}
