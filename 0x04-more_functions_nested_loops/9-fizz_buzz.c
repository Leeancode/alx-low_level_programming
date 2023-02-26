#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints numbers
 * Fizz multiples 3 Buzz for 5
 * FizzBuzz for both
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n < 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
