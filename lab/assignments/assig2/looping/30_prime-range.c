#include <stdio.h>

int main(){
	int num, prime;
	printf("Enter a prime number: ");
	scanf("%d", &num);
	
	for (int n = 0; n <= num; n++){
		prime = 1;
		if (n < 2) {
			printf ("Number is neither prime nor composite.\n");
		}
		if (n == 2 || n == 3) prime == 1;
		else if (n % 2 == 0 || n % 3 == 0) prime = 0;
		else {
			for (int i = 5; i*i <= n; i += 6){
				if (n % i == 0 || n % (i + 2) == 0)
				{
					prime = 0;
					break;
				}
			}
		}
		if (prime == 1) printf("%d ", n);
	}
	printf("\n");
}
