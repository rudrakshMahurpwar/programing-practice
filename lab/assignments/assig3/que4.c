#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("Enter the sting word: "); scanf("%99s", str);
	int pali = 1;
	int a= 0, b = strlen(str)-1;	
	while (a<b){
		if (str[a++] != str[b--]){
			pali = 0;
			break;
		}
	}
	
	(pali == 1) ? printf("Given string is a palindrome.\n") : printf("String is not a palindrome.\n");
	return 0;
}
