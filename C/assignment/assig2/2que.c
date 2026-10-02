#include <stdio.h>

void display(int arr[], int len);
void selectionSort(int arr[], int len);
void bubbleSort(int arr[], int len);
void insertionSort(int arr[], int len);
void quickSort(int arr[], int low, int high);
void mergeSort(int arr[], int low, int high);
void merge(int a[], int low, int mid, int high);
void heapify(int arr[], int len, int root);
void heapSort(int arr[], int len);


int main(){
	int len, op;
	printf("Enter the size of the array: ");
	scanf("%d", &len);
	int arr[len];
	printf("Enter the elements of array\n");
	for (int i = 0; i < len; i++){
		printf("Enter element %d: ", i+1);
		scanf("%d", (arr+i));
	}
	display(arr, len);
	
	printf("\nSorting Options.\n"
		"1. Selection Sort.\n"
		"2. Bubble Sort.\n"
		"3. Insertion Sort.\n"
		"4. Quick Sort.\n"
		"5. Merge Sort\n"
		"6. Heap Sort\n"
		"0. Abort\n"
		);
	printf("Select the sorting mechanism to perform (1/2/3/4/5/6/0): ");
	scanf("%d", &op);
	switch(op){
		case 1 :
		{
			printf("Unsorted array is: ");
			display(arr, len);
			selectionSort(arr, len);
			printf("Sorted array is: ");
			display(arr, len);
			break;
		}
		case 2 :
		{
			printf("Unsorted array is: ");
			display(arr, len);
			bubbleSort(arr, len);
			printf("Sorted array is: ");
			display(arr, len);
			break;
		}
		case 3 :
		{
			printf("Unsorted array is: ");
			display(arr, len);
			insertionSort(arr, len);
			printf("Sorted array is: ");
			display(arr, len);
			break;
		}
		case 4 :
		{
			printf("Unsorted array is: ");
			display(arr, len);
			quickSort(arr, 0, len-1);
			printf("Sorted array is: ");
			display(arr, len);
			break;
		}
		case 5 :
		{
			printf("Unsorted array is: ");
			display(arr, len);
			mergeSort(arr, 0, len-1);
			printf("Sorted array is: ");
			display(arr, len);
			break;
		}
		case 6 :
		{
			printf("Unsorted array is: ");
			display(arr, len);
			heapSort(arr, len);
			printf("Sorted array is: ");
			display(arr, len);
			break;
		}
		default :
			printf("Invalid Choice.\n");
		case 0 :
		{
			printf("Exiting\n");
			break;
		}
	}
	return 0;
}

void display(int arr[], int len){
	for (int i = 0; i < len; i++)
		printf(" %d ", arr[i]);
	printf("\n");
}

void selectionSort(int arr[], int len){
	for (int i = 0; i < len; i++){
		int min = i;
		for (int j = i + 1; j < len; j++){
			if (arr[j] < arr[min])
				min = j;
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

void bubbleSort(int arr[], int len){
	int temp, count;
	for (int i = 0; i < len; i++){
		for (int j = 0; j < len - i -1; j++){
			if (arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void insertionSort(int arr[], int len){
	int key, j;
	for (int i = 1; i < len; i++){
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--)
			arr[j+1] = arr[j];
		arr[j + 1] = key;
	}
}

void quickSort(int arr[], int low, int high){
	int pivot, start, end, temp;
	if (low < high){
		start = low;
		end = high;
		pivot = low;
		while (start < end){
			while (arr[start] <= arr[pivot])
				start++;
			while (arr[end] > arr[pivot])
				end--;
			if (start < end){
				temp = arr[start];
				arr[start] = arr[end];
				arr[end] = temp;
			}
		}
		temp = arr[pivot];
		arr[pivot] = arr[end];
		arr[end] = temp;
		quickSort(arr, low, end - 1);
		quickSort(arr, end + 1, high);
	}
}

void mergeSort(int arr[], int low, int high){
	if (low < high){
		int mid = (low + high) / 2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}

void merge(int a[], int low, int mid, int high){
	int i, j, k, b[100];
	i = k = low, j = mid + 1;
	while (i <= mid && j <= high){
		if (a[i] <= a[j])
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
	}
	while (i <= mid)
		b[k++] = a[i++];
	while (j <= high)
		b[k++] = a[j++];
	for (i = low; i <= high; i++)
		a[i] = b[i];
}

void heapify(int arr[], int len, int root){
	int largest = root;
	int left = 2 * root + 1;
	int right = left + 1;

	if (left < len && arr[left] > arr[largest])
		largest = left;
	if (right < len && arr[right] > arr[largest])
		largest = right;
	if (largest != root){
		int temp = arr[largest];
		arr[largest] = arr[root];
		arr[root] = temp;
		heapify(arr, root, largest);
	}
}

void heapSort(int arr[], int len){
	for (int i = len / 2 - 1 ; i >=0; i--)
		heapify(arr, len, i);
	for (int i = len - 1; i >  0; i--){
		int temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;
		heapify(arr, i, 0);
	}
}

