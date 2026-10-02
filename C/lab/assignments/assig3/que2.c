#include <stdio.h>

int main(){
	int n; printf("Enter number of elemets in array: "); scanf("%d", &n);
	int array[n];
	printf("Enter the elements of array: ");
	for (int i = 0; i < n; i++) scanf("%d", array + i);
	int even[n]; 
	int odd[n];
	int e = 0;
	int o = 0;

	for (int i = 0; i < n; i++){
		if (array[i]%2==0)
			even[e++] = array[i];
		else
			odd[o++] = array[i];
	}
	printf("Even array: ");
	for (int i = 0; i < e; i++) printf("%d ", even[i]); printf("\n");
	printf("Odd array: ");
	for (int i = 0; i < o; i++) printf("%d ", odd[i]); printf("\n");
	return 0;
}
