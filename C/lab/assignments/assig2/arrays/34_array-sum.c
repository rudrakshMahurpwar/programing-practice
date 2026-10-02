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

	printf("Sum of elements of array is %d\n", sum);
	return 0;
}
