#include<stdio.h>

int main(){
	int n1, n2;
	printf("Enter the lengths of two arrays: ");
	scanf("%d %d", &n1, &n2);

	printf("Enter the elements of first array: ");
	int arr1[n1];
	for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
	
	printf("Enter the elements of second array: ");
	int arr2[n2];
	for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

	int combine = (sizeof(arr1)/sizeof(arr1[0])) + (sizeof(arr2)/sizeof(arr2[0]));

	int arr3[combine];
	for(int j = 0; j <n1; j++)
		arr3[j] = arr1[j];
	for(int j = 0; j <n2; j++)
		arr3[n1 + j] = arr2[j];
	
	for(int j = 0; j < combine; j++) printf("%d ", arr3[j]);
	printf("\n");	
	return 0;
}
