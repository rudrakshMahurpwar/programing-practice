#include <stdio.h>

void main(){

	char ch;
	int in = 1;
	while (in == 1){
		printf("Enter a charater: ");
		scanf(" %c", &ch);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			printf("'%c' is a vowel.\n", ch);
		else printf("'%c' is an consonant.\n", ch);
		printf("\n");
		printf("Want to check again?(1/0): ");
		scanf("%d", &in);
	}
}
