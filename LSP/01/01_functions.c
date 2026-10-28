#include <stdio.h>

int is_even(int num)
{
	return (num % 2 == 0) ? 1 : 0;
}

int is_odd(int num)
{
	return (num % 2 == 0) ? 0 : 1;
}

int is_prime(int num)
{
	if (num <= 1) return 0;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0) return 0;
	}
	return 1;
}
