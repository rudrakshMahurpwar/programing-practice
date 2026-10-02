#include <stdio.h>

int sequentialSearch(int arr[], int len, int search);
int binarySearch(int arr[], int len,  int search);

int main(){
	int len, search, index;
	char op;
	do{
		printf("\nWhat kind of searching to use?\n"
			"a. Sequential Search\n"
			"b. Binary Search\n"
			"e. Exit.\n");
		printf("Select Choice (a/b/e): ");
		scanf(" %c", &op);
		switch(op){
			case 'a' :
			{
				printf("Enter number of elements you want to enter in array: ");
				scanf("%d", &len);
				int arr[len];
				printf("Enter elements of array\n");
				for (int i = 0; i < len; i++){
					printf("Enter element %d: ", i+1);
					scanf("%d", &arr[i]);
				}
				printf("Enter element you want to search from array: ");
				scanf("%d", &search);
				index = sequentialSearch(arr, len, search);
				(index > 0) ?
					printf("Element %d is found at index %d.", search, index) :
					printf("Element %d is not in the array", search);
				printf("\n");
				break;
			}
			case 'b' :
			{
		
				printf("Enter number of elements you want to enter in array: ");
				scanf("%d", &len);
				int arr[len];
				printf("Enter elements of array in ascending order\n");
				for (int i = 0; i < len; i++){
					printf("Enter element %d: ", i+1);
					scanf("%d", &arr[i]);
				}
				printf("Enter element you want to search from array: ");
				scanf("%d", &search);
				index = binarySearch(arr, len, search);
				(index > 0) ?
					printf("Element %d is found at index %d.", search, index) :
					printf("Element %d is not in the array", search);
				printf("\n");
				break;
			}
			default:
				printf("Invalid Choice.\n");

		}
	} while (op != 'e');
	return 0;
}

int sequentialSearch(int arr[], int len, int search){
	for (int i = 0; i < len; i++){
		if (arr[i] == search)
			return i;
	} return -1;
}

int binarySearch(int arr[], int len, int search){
	int start = 0;
	int end = len - 1;
	while (start < end){
		int mid = (start + end)/2;
		if (arr[mid] == search)
			return mid;
		else if (arr[mid] < search)
			start = mid + 1;
		else if (arr[mid] > search)
			end = mid - 1;
	}
	return -1;
}
