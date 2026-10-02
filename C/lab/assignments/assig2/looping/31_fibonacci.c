#include <stdio.h>

void main() {
	int num, first, second, temp;
	first = 0, second = 1;

	printf("Enter number for fibonnaci series: ");
	scanf("%d", &num);

	printf("%d ", first);

	for (int i = 1; i <= num; i++){
		printf("%d ", second);
		temp = second;
		second += first;
		first = temp;
	}
	printf("\n");
}
