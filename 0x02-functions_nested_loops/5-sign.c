#include "main.h"
/**
 * print_sign - function that prints sign of a number
 *
 * @n: number to be tested
 *Return: 1 if greater 0 and 0 equal to 0 and -1 if less than 0
 */
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
