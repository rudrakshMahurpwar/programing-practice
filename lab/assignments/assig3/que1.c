#include <stdio.h>

int main(){
	int n; printf("Enter number of elments in array: "); scanf("%d", &n);
	printf("Enter the elemnts of array: ");
	int arr[n];
	for (int i = 0; i < n; i++) scanf("%d", arr + i);

	for (int i = 0; i < n; i++){
		int count = 0;
		int counted = 0;
		for (int j = 0; j < i; j++){
			if(arr[i] == arr[j]){
				counted = 1; break;
			}
		}
		if (counted) continue;

		for (int j = 0; j < n; j++){
			if (arr[i] == arr[j]) count++;
		}
            	printf("%d: %d\n", arr[i], count);
    	}
	return 0;
}
