#include <stdio.h>

int arrmax(int *array, int n){
	int max = array[0];
	for (int i = 1; i < n; i++){
		if (array[i] > max) max = array[i];
	}
	return max;
}

int main(){
	int n;
	printf("Enter length of array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter elements of array: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	printf("Maminum element of array is: %d.\n", arrmax(arr, n));
	return 0;
}
