#include<stdio.h>

int sum(int a, int b){
	return a+b;
}

int main(){
	int x, y;
	printf("Enter two nos: ");
	scanf("%d %d", &x, &y);
	printf("Addition: %d.\n", sum(x,y));
	return 0;
}
