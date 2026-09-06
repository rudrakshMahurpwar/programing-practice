#include <stdio.h>

void a(int lines){
	for (int i = lines; i > 0; i--){
		for(int j = 1; j <= i; j++) printf("* ");
		printf("\n");
	}
}

void b(int lines){
	for (int i = lines; i > 0; i--){
		for (int j = 1; j <= i; j++) printf("%d ", i);
		printf("\n");
	}
}

void c(int lines){
	for (int i = lines; i > 0; i--){
		for (int j = 1; j <= i; j++) printf("%d ", j);
		printf("\n");
	}
}

void d(int lines){
	int p = 1;
	for (int i = lines; i > 0; i--){
		for (int j = 1; j <= i; j++) printf("%4d ", p++);
		printf("\n");
	}
}

void e(int lines){
	for (int i = lines; i > 0; i--){
		for (int j = 1; j <= i; j++) printf("%d ", (i+j));
		printf("\n");
	}
}

void f(int lines){
	for (int i = lines; i > 0; i--){
		for (int j = 1; j <= i; j++) ((i+j)%2==0) ? printf("1 ") : printf("0 ");
		printf("\n");
	}
}

void g(int lines){
	for (int i = lines; i > 0; i--){
		for (int j = 1; j <= i; j++) printf("%d ", (lines-i+1));
		printf("\n");
	}
}

void h(int lines){
	for (int i = lines; i > 0; i--){
		for (int j = 1; j <= i; j++) printf("%d ", (lines-j+1));
		printf("\n");
	}
}

int main(){
	int lines;
	printf("Enter the number of lines: "); scanf("%d", &lines);
	a(lines);
	printf("\n");
	b(lines);
	printf("\n");
	c(lines);
	printf("\n");
	d(lines);
	printf("\n");
	e(lines);
	printf("\n");
	f(lines);
	printf("\n");
	g(lines);
	printf("\n");
	h(lines);
	printf("\n");
	return 0;
}
