#include <stdio.h>

void main(){
	int num;
	printf("Enter number you want the table of: ");
	scanf("%d", &num);

	for (int i = 1; i < 11; i++)
		printf("%d x %d = %d.\n", i,num,i*num);
	printf("\n");
}
