#include <stdio.h>

int prime(int n){
	if (n < 2) printf("Number if neither prime nor composite.\n");
	if (n == 2 || n == 3) return 1;
	if (n % 2 == 0 || n % 3 == 0) return 0;
	for (int i = 5; i*i < n; i+=6){
		if (n % i == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	printf("Enter prime number: ");
	scanf("%d", &n);
	( prime(n) == 1 ) ? printf("Number is Prime") : printf("Number is not Prime");
	printf("\n");
	return 0;
}
	
