#include <stdio.h>

int printn(int n){
	if (n == 0) return 0;
	printn(n-1);
	printf("%d ", n);
}

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printn(n);
	printf("\n");
	return 0;
}

