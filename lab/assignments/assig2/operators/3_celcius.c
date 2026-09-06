#include <stdio.h>

void main(){
	// Program to convert Celsius to Fahrenheit.
	
	// Getting the temperatures.
	float celsius;
	printf("Enter the temperature: ");
	scanf("%f", &celsius);

	// Converting Temperature
	float fahrenheit;
	fahrenheit = 1.8*celsius+32;

	printf("%.2f Celsius is %.2f Fahrenheit.\n", celsius, fahrenheit);
}
