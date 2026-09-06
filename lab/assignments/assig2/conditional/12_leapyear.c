#include <stdio.h>

int main(){
	int year;

	printf("Enter your birth year: ");
	scanf("%d", &year);
	printf("Year %d is ", year);
	if (year % 4 == 0 || year % 100 == 0)
		printf("a Leap.\n");
	else printf("not a Leap.\n");
}
