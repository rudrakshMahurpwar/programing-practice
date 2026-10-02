#include <stdio.h>

void square(int lines){
	for (int i = 1; i <= lines; i++){
		for (int j = 1; j <= lines; j++) printf("*");
		printf("\n");
	}
}

void hollowsquare(int lines){
	for (int i = 1; i <= lines; i++){
		for (int j = 1; j <= lines; j++){
			if ( i == 1 || i == lines) printf("*");
			else if (j == 1 || j == lines) printf("*");
			else if (j != 1 || j != lines) printf(" ");
		}
		printf("\n");
	}
}

void xsquare(int lines){
	for (int i = 1; i <= lines; i++){
		for (int j = 1; j <= lines; j++){
			if (j == i) printf("\\");
			else if (j == (lines - (i-1) )) printf("/");
			else printf("*");
		}
		printf("\n");
	}
}
int main(){
	int lines;
	printf("Enter number of lines: "); scanf("%d", &lines);
	xsquare(lines);
	return 0;
}
