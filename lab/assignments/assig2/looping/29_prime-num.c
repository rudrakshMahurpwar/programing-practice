#include <stdio.h>

int main(){
	int num, prime;
	printf("Enter a prime number: ");
	scanf("%d", &num);
	prime = 1;
	if (num < 2) {
		printf ("Number is neither prime nor composite.\n");
		return 0;
	}
	if (num == 2 || num == 3) prime == 1;
	else if (num % 2 == 0 || num % 3 == 0) prime = 0;
	else {
	for (int i = 5; i*i <= num; i += 6){
		if (num % i == 0 || num % (i + 2) == 0) {
			prime = 0;
			break;
		}
	}
	}
	printf("Number is ");
	(prime == 0) ? printf("Not Prime.\n") : printf("Prime.\n");
	return 0;
}
