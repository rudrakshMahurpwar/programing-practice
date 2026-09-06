#include<stdio.h>

void func(char *name){
	printf("Have a Good Day %s.\n", name);
}
int main(){
	char name[20];
	printf("Enter your name: ");
	scanf("%s", name);
	func(name);
	return 0;
}
