#include <stdio.h>
int main(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);

	printf("Enter elements: ");
	int arr[n];
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	int largest= arr[0], slarge= arr[1];
	for (int i = 2; i < n; i++){
		if(arr[i] > largest){
			slarge = largest;
			largest = arr[i];
		}
		else if (arr [i] > slarge && arr[i] !=largest) 
			slarge = arr[i];
	}
	printf("Second largest = %d\n", slarge);		
	 
	return 0;
}
