#include <stdio.h>
void _06(){
	int x, y, z;
	x = x++;
	printf("%d\n", x);
	//y = ++x++;
	printf("%d %d\n", x, y);
	//z = (x+y)--;
	printf("x = %d, y = %d, z = %d\n", x, y, z);
}

void _08(){
	int a=15, b =13, c =16, x, y;
	x = a-3%2+c*2/4%2+b/4;
	y = a = b+5-b+9/3;
	printf("x= %d, y= %d\n", x,y);
}

void _11(){
	float b;
	b = 15/2;
	printf("%f\t",b);
	b=(float)15/2 + (15/2);
	printf("%f\n", b);

}

void _18(){
	int a =10;
	a = a++;
	a = a++ * a--;
	printf("%d\n", a);
	printf("%d\n", a++ * a++);
}

void _20(){
	// Write a C program that enter the temperature in Celsius and converts that into Farenhite.
	int celsius, farenhite;
	printf("Enter the temperature in celsius: ");
	scanf("%d", &celsius);
	farenhite = (celsius*1.8) + 32;
	printf("%d Celsius in Farenhite is %d.\n", celsius, farenhite);
}

void _21(){
	// Write a program that accepts the radius of a circle and calculates the area and perimeter of the circle
	int radius, area, perimeter;
	printf("Enter the radius of the circle: ");
	scanf("%d", &radius);
	area = 3.14*radius*radius;
	perimeter = 2*3.14*radius;
	printf("For the circle of %d radius, the area is %d and perimeter is: %d.\n", radius, area, perimeter);
}

void _22(){
	// Write a program to accept the number in decimal and return it in octal and hexadecimal
	

	int dec;
	printf("Enter a number of base 10: ");
	scanf("%d", &dec);
	
	printf("Octal representation of %d is %o.\n", dec, dec);
	printf("Hexadecimal representation of %d is %x.\n", dec, dec);
}

void _23(){
	// Write a program to accept any number and print the reminder after division by 3
	int num;
	printf("Enter number to divide by 3: "); scanf("%d", &num);
	printf("Reminder of %d after division by 3 is %d.\n", num, num%3);
}

void _24(){
	// Accept any two numbers, if the fist number is greater than second then print their diffrence otherwise print their sum. Write this program using ternary operator. 

	int num1, num2;
	printf("Enter first number: "); scanf("%d", &num1);
	printf("Enter second number: "); scanf("%d", &num2);
	(num1 > num2) ? printf("%d is greater.\n", num1) : printf("%d is greater.\n", num2);
	(num1 > num2) ? printf("Diffrence: %d.\n", num1-num2) : printf("Sum: %d.\n", num1+num2);
}

void _25(){
	// Write a program that accepts the marks of 5 subjects and calculates the total percentage marks.
	int s1, s2, s3, s4, s5, total; float percentage;
	printf("Enter marks of first subject: "); scanf("%d", &s1);
	printf("Enter marks of second subject: "); scanf("%d", &s2);
	printf("Enter marks of third subject: "); scanf("%d", &s3);
	printf("Enter marks of fourth subject: "); scanf("%d", &s4);
	printf("Enter marks of fifth subject: "); scanf("%d", &s5);

	total = s1+s2+s3+s4+s5;
	percentage = ((float)total/5);

	printf("Your total percentage is %.2f.\n", percentage);

}
int main(){
	_25();
	return 0;
}
