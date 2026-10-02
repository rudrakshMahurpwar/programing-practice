#include <stdio.h>
#include <math.h>

void main(){
	int num, snum, count, armnum, digit, digitpow;
	printf ("Enter your armstrong number: ");
	scanf("%d", &num);
	snum = num;
	count = 0;
	armnum = 0;
	while (num > 0){
		digit = num % 10;
		count += 1;
		num /= 10;
	}

	num = snum;

	while (num > 0){
		digit = num % 10;
		digitpow = pow(digit, count);
		armnum += digitpow;
		num /= 10;
	}
	(armnum == snum) ? printf("Armstrong number.") : printf("Not armstrong number.");
	printf("\n");
}
