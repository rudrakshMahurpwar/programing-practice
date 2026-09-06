#include <stdio.h>

int main(){
	int n;
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);

	int arr[n];
	// Taking Array Input
	printf("Enter the elements\n");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	// summation of the  elements of array
	int sum = 0;
	for (int i = 0; i < n; i++) sum += arr[i];

	printf("Average of elements of array is %.2f\n", (float)sum/n);
	return 0;
}
