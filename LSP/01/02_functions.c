#include <stdio.h>

float celsius_to_fahrenheit(float celsius)
{
	return (celsius * 9.0 / 5.0) + 32;
}

float fahrenheit_to_celsius(float fahrenheit)
{
	return (fahrenheit - 32) * 5.0 / 9.0;
}

