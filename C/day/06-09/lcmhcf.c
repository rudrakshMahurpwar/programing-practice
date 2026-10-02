#include <stdio.h>

int main(){
	int a, b, x, y;
	printf("Enter your numbers: "); scanf("%d %d", &x, &y);
	a = x, b = y;
	while (a != b)
		(a<b) ? (a = a + x) : (b = b + y);
	printf("LCM of %d and %d is: %d.\n", x, y, a);
	a = x, b = y;
	while (a != b)
		(a>b) ? (a = a-b) : (b = b-a);
	printf("HCF of %d and %d is: %d.\n", x, y, a);
	
	return 0;
}
