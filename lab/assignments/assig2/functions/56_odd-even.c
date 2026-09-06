#include <stdio.h>

int oddEven(int n){
	return (n % 2 == 0) ? 1 : 0;
}

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	(oddEven(n) == 1) ? printf("Even") : printf("Odd");
	printf("\n");
	return 0;
}
