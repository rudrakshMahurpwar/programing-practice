#include<stdio.h>

void menu(){
	printf("1. Display Array\n");
	printf("2. Find Maximum\n");
	printf("3. Find Minimum\n");
	printf("4. Find Sum\n");
	printf("5. Find Average\n");
	printf("6. Search Element\n");
	printf("7. Reverse Array\n");
	printf("8. Exit\n");
}

void display(int *array, int n){
	for(int i=0; i<n; i++) printf("%d ", array[i]);
	printf("\n");
}

int max(int *array, int n){
	int max = array[0];
	for (int i = 1; i < n; i++){
		if(array[i]>max) max = array[i];
	}
	return max;
}

int min(int *array, int n){
	int min = array[0];
	for (int i = 0; i < n; i++){
		if (array[i]<min) min = array[i];
	}
	return min;
}

int sum(int *array, int n){
	int sum = 0;
	for(int i = 0; i < n; i++) sum += array[i];
	return sum;
}

int average(int *array, int n){
	return (sum(array, n)/n);
}

int search(int *array, int n, int key){
	for (int i = 0; i < n; i++){
		if (key == array[i]) return i;
	}
	return -1;
}

int reverse(int *array, int n){
	for(int i = 0; i < n/2; i++){
		int temp = array[0];
		array[0] = array[n-i-1];
		array[n-1-i] = temp;
	}
}

int main(){
	int n = 8;
	int array[8] = {5, 19, 53, 48, 63, 9, 14, 49};
	int choice = 1;
	while (choice != 0){
		menu();
		printf("Enter Choice: ");
		scanf("%d", &choice);
		switch (choice){
			case 1:
				display(array, n);
				break;
			case 2:
				printf("Maximum: %d\n", max(array, n));
				break;
			case 3:
				printf("Minimum: %d\n", min(array, n));
				break;
			case 4:
				printf("Sum: %d\n", sum(array, n));
				break;
			case 5:
				printf("Average: %d\n", average(array,n));
				break;
			case 6:
				int key;
				printf("What element you want to search?: ");
				scanf("%d", &key);
				int index = search(array, n, key);
				(index == -1) ? printf("Key not Found.\n") : printf("The element %d is at index %d.\n", key, index);
				break;
			case 7:
				printf("Array is: ");
				display(array, n);
				reverse(array, n);
				printf(" Reversed array is: ");
				display(array, n);
				break;
			case 8:
				printf("Exiting!!\n");
				choice = 0;
				break;
			default:
				printf("Enter the valid choice.\n");
		}
	}
	return 0;
}
