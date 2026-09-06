# include <stdio.h>

int getAge(){
	int age;
	printf("Enter age: ");
	scanf("%d", *age);
	return age;
}

int main (){
	int age = getAge();
	printf("Your age is %d\n", age);
	return 0;
}
