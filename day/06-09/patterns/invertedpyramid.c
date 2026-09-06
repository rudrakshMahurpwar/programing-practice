#include <stdio.h>

void a(int lines){
	for (int i=lines; i>0; i--){
		for (int j = 1; j <= lines-i; j++) printf(" ");
		for (int j = 1; j <= i; j++) printf("* ");
		printf("\n");
	}
}

void b(int lines){
	for (int i=lines; i>0; i--){
		for (int j = 1; j <= lines-i; j++) printf(" ");
		for (int j = 1; j <= i; j++) printf("%d ", i);
		printf("\n");
	}
}

void c(int lines){
	for (int i=lines; i>0; i--){
		for (int j = 1; j <= lines-i; j++) printf(" ");
		for (int j = 1; j <= i; j++) printf("%d ", j);
		printf("\n");
	}
}

void d(int lines){
	for (int i=lines; i>0; i--){
		for (int j = 1; j <= lines-i; j++) printf("  ");
		for (int j = 1; j <= i; j++) printf("%4d ", (i+j));
		printf("\n");
	}
}

void e(int lines){
	int p = 1;
	for (int i=lines; i>0; i--){
		for (int j = 1; j <= lines-i; j++) printf("  ");
		for (int j = 1; j <= i; j++) printf("%4d ", p++);
		printf("\n");
	}
}

void f(int lines){
	for (int i=lines; i>0; i--){
		for (int j = 1; j <= lines-i; j++) printf(" ");
		for (int j = 1; j <= 2*i-1; j++) printf("*");
		printf("\n");
	}
}

void g(int lines){
	for (int i=lines; i>0; i--){
		for (int j = 1; j <= lines-i; j++) printf(" ");
		for (int j = 1; j <= 2*i-1; j++) printf("%d", j);
		printf("\n");
	}
}

void h(int lines){
	for (int i=1; i<=lines; i++){
		int p = i;
		for (int j = 1; j <= lines-i; j++) printf(" ");
		for (int j = 1; j <= i; j++) printf("%d", p++);
		p -= 2;
		for (int j = 1; j < i; j++) printf("%d", p++);
		printf("\n");
	}
}

void i(int lines){
	for (int i=lines; i>0; i--){
		int p = lines;
		for (int j = 1; j <= lines-i; j++) printf(" ");
		for (int j = 1; j <= i; j++) printf("%d", p++); p--;
		for (int j = 1; j < i; j++) printf("%d", --p);
		printf("\n");
	}
}

int main(){
	int lines;
	printf("Enter the number of line: "); scanf("%d", &lines);
	f(lines); printf("\n");
	i(lines); printf("\n");
	return 0;
}
