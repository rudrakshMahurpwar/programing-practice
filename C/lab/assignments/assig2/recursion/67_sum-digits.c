#include <stdio.h>

int sumDigits(int n, int sum){
	if (n ==0) return 0;
	return sum + n%10 + sumDigits(n/10, sum);
}

int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Sum of digits is: %d.\n", sumDigits(n,0));
	return 0;
}

