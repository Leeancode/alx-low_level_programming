#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times.
 *
 * Return: 0 sucess.
 *
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

	i++;
}
