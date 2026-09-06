#include <stdio.h>

int max(int a, int b){
	return (a>b) ? a : b;
}

int main(){
	int x, y;
	printf("Enter two nos: ");
	scanf("%d %d", &x, &y);
	printf("Maximum of two is: %d\n", max(x, y));
	return 0;
}
