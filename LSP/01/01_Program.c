#include <stdio.h>

int is_even(int);
int is_odd(int);
int is_prime(int);

int main()
{
	int num, op;

	do
	{
		printf("\n---------- MENU ----------\n");
		printf("1. Check Even.\n"
				"2. Check Odd.\n"
				"3. Check Prime.\n"
				"0. Exit\n");
		printf("Enter the choice (1/2/3/0): ");
		scanf("%d", &op);

		if (!op) break;

		switch(op)
		{
			case 1:
				printf("Enter the number to check: ");
				scanf("%d", &num);
				(is_even(num)) ?
					printf("Number is even\n") :
					printf("Number is not even\n") ;
				break;
			case 2:
				printf("Enter the number to check: ");
				scanf("%d", &num);
				(is_odd(num)) ?
					printf("Number is Odd\n") :
					printf("Number is not Odd\n") ;
				break;
			case 3:
				printf("Enter the number to check: ");
				scanf("%d", &num);
				(is_prime(num)) ?
					printf("Number is Prime\n") :
					printf("Number is not Prime\n") ;
				break;
			default:
				printf("Invalid Choice\n");
		}

	} while (op);

	return 0;
}
