#include<stdio.h>

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter elements: ");
	for(int i=0; i < n; i++) scanf("%d", &arr[i]);

	// Copying elements
	int length = sizeof(arr)/sizeof(arr[0]);
	int car[length];
	for (int i = 0; i < length; i++) car[i] = arr[i];

	printf("Elements of array 1: ");
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\n");
	printf("Elements of array 2: ");
	for (int i = 0; i < length; i++) printf("%d ", car[i]);
	printf("\n");
	return 0;
}
