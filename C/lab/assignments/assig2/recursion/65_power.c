#include <stdio.h>

int power(int a, int b){
	if (b == 0) return 1;
	return a * power(a, b-1);
}

int main(){
	int n1, n2;
	printf("Enter numbers: ");
	scanf("%d %d", &n1, &n2);
	printf("Power is: %d\n", power(n1, n2));
	return 0;
}
