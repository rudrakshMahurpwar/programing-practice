#include <stdio.h>

int power(int a, int b){
	if (b == 0) return 1;
	return a * power(a, b-1);
}

int repunit(int n){
	int sum = 0, term = 1;
	while(n){
		sum += term;
		term = term*10+1;
		n--;
	}
	return sum;
}

int finitegp(int n){
	int x, sum = 0;
	printf("Enter the value of x: "); scanf("%d", &x);
	while (n>0){
		sum += power(x,n);
		n--;
	}
	return sum;
}

int alternatinggp(int n){
	int x, sum = 0;
	printf("Enter the value of x: "); scanf("%d", &x);
	for (int i = 1; i <= n; i++){
		if (i%2==0) sum -= power(x,i);
		else sum += power(x,i);
	}
	return sum;
}
int main(){
	int n;
	printf("Enter number of terms: "); scanf("%d", &n);
	printf("Sum of series 1+11+111+... for n terms is: %d.\n", repunit(n));
	printf("Sum of series x+x2+x3+... for n terms is: %d.\n", finitegp(n));
	printf("Sum of series x-x2+x3-... for n terms is: %d.\n", alternatinggp(n));
	return 0;
}
