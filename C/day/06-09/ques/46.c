#include <stdio.h>

int main(){
	// Write a program to print numbers form 1 to 80 seperated by tab, 8 number per line.
	int n, i = 1;
	printf("Enter numbers per line: "); scanf("%d", &n);
	
	while(i<81){
		printf("%d\t", i);
		if(i%n == 0) printf("\n");
		i++;
	}
	return 0;
}
