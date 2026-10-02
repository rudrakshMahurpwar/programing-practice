#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("Input String: "); scanf("%99s", str);
	char expstr[strlen(str)];

	for (int i = 0; i < strlen(str); i++){
		if ((str[i] > 65 && str[i] < 90) || (str[i] > 97 && str[i] < 122))
			printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
