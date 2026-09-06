#include<stdio.h>

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);

	printf("Enter elements: ");
	int arr[n];
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	int smallest=arr[0], ssmall=arr[0];
	for(int i = 2; i < n; i++){
		if(arr[i]<smallest){
			ssmall = smallest;
			smallest = arr[i];
		} else if (arr[i] > ssmall && arr[i] != smallest)
			ssmall = arr[i];
	}
	printf("Second Smallest is: %d.\n", ssmall);
	return 0;
}
