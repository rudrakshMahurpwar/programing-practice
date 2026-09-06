#include <stdio.h>

int main(){
	int n;
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);

	int arr[n];
	// Taking Array Input
	printf("Enter the elements\n");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	// displaying the elements of array
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	return 0;
}
