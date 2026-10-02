#include <stdio.h>

int main(){
	int n;
	printf("Enter number of elements of array: ");
	scanf("%d", &n);

	// filling array
	printf("Enter elements of array\n");
	int maxmin[n];
	for (int e = 0; e < n; e++) scanf("%d", &maxmin[e]);

	// Finding max and min
	int max = maxmin[0], min = maxmin[0];
	for (int e = 0; e < n; e++){
		if (maxmin[e] > max) max = maxmin[e];
		if (maxmin[e] < min) min = maxmin[e];
	}

	printf("Maximum: %d and Minimum:%d.\n", max, min);
	return 0;
}
