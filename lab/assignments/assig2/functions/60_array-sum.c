#include<stdio.h>

int arrsum(int *array, int n){
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += array[i];
	return sum;
}

int main(){
	int n;
	printf("Enter length of array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements of array: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	printf("Summation of all elements is: %d\n", arrsum(arr,n));
	return 0;
}
