#include <stdio.h>

float celsius_to_fahrenheit(float);
float fahrenheit_to_celsius(float);

int main()
{
	int op;
	float temp;

	do
	{
		printf("\n-------- MENU --------\n");
		printf("1. Celsius to Fahrenheit Conversion\n");
		printf("2. Fahrenheit to Celsius Conversion\n");
		printf("0. Exit.\n");
		printf("Enter Choice (1/2/0): ");
		scanf("%d", &op);

		if (!op) break;
		switch(op)
		{
			case 1:
				printf("Enter Temperature Celsius: ");
				scanf("%f", &temp);
				printf("Temperature in Fahrenheit is: %f", celsius_to_fahrenheit(temp));
				break;
			case 2:
				printf("Enter Temperature in Fahrenheit: ");
				scanf("%f", &temp);
				printf("Temperature in Celsius is: %f", fahrenheit_to_celsius(temp));
		}
	} while(op);
	return 0;
}
