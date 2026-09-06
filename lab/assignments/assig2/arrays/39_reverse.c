#include <stdio.h>

int main(){
	int n;
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);

	printf("Enter elements of array\n");
	int rarr[n];
	for (int e = 0; e < n; e++) scanf("%d", &rarr[e]);

	int s = 0, l = n - 1;
	while (s != l){
		int temp = rarr[s];
		rarr[s] = rarr[l];
		rarr[l] = temp;
		s++;
		l--;
	}

	printf("Reversed array is: ");
	for (int e = 0; e < n; e++) printf("%d ", rarr[e]);
	printf("\n");
	return 0;
}
