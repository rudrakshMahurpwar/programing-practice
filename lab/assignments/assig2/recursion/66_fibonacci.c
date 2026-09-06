#include <stdio.h>

void fibo(int a, int b, int n){
	if(n == 0) return ;
	printf("%d ", a);
	fibo(b, a+b, n-1);
}

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	fibo(0, 1, n);
	printf("\n");
	return 0;
}
