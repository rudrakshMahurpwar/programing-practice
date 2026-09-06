#include <stdio.h>

int sumn(int n, int sum){
	if (n == 0) return sum;
	sum = sum + n;
	sumn(n-1, sum);	
}

int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Sumation: %d", sumn(n, 0));
	printf("\n");
	return 0;
}
