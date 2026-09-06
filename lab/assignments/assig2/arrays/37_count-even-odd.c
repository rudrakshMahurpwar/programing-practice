#include <stdio.h>

int main(){
	int n;
	printf("Enter the number of elements of array: ");
	scanf("%d", &n);

	int carr[n];
	for (int e = 0; e < n; e++) scanf("%d", &carr[e]);

	int even = 0, odd = 0;
	for (int e = 0; e < n; e++)
		(carr[e] % 2 == 0) ? even++ : odd ++;
	
	printf("Even count: %d\nOdd count: %d.\n", even, odd);
	return 0;
}
