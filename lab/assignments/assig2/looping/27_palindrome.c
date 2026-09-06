#include <stdio.h>

void main(){
	int num, snum, revnum, digit;
	printf("Enter a number to reverse: ");
	scanf("%d", &num);
	snum = num;
	while (num > 0){
		digit = num % 10;
		revnum = revnum*10 + digit;
		num /= 10;
	}
	(snum == revnum) ? printf("Palindrome number") : printf("Not a plaindrome number"); 
	printf("\n");
}
