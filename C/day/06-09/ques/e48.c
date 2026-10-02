#include <stdio.h>

int main(){
	/* write a program to enter 10 numbers ranging form 1 to 50, and draw a histogram by displaying adjacent '=' signs for each number entered.
	 * For example if the number entered is 12 then line of 12 equal to signs should be displayed.*/
	
	int num[10];

	for (int i = 0; i<10; i++){
		printf("Enter number between 1 and 50: "); scanf("%d", num + i);
	}

	printf("Histogram\n");

	for(int i = 0; i<10; i++){
		for (int j = 0; j < num[i]; j++) printf("=");
		printf("\n");
	}
	printf("\n");
}
