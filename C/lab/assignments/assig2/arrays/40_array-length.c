#include<stdio.h>

int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);
	
	printf("Enter the elements: ");
	int arr[n];
	for(int i = 0; i < n; i++) scanf("%d", &n);

	int length = sizeof(arr)/sizeof(arr[0]);
	printf("Length of the given array is: %d\n", length);
	return 0;
}
