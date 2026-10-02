#include <stdio.h>

void main(){
	int num;
	printf("Enter the number you want count the digits of: ");
	scanf("%d", &num);
	int count = 0 ;
	
	while (num > 0){
		count += 1;
		num /= 10;
	}


	printf("The digits in your number is %d.\n", count);
}
