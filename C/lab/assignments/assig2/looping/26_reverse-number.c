#include <stdio.h>

void main(){
	int num, revnum, digit;

	printf("Enter a number to reverse: ");
	scanf("%d", &num);

	while (num > 0){
		digit = num % 10;
		revnum = revnum*10 + digit;
		num /= 10;
	}
	printf("The Entered number when reversed is %d.\n", revnum);
}
