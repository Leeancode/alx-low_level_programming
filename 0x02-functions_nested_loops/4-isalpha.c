#include "main.h"
/**
 * _isalpha - shows 1 if input is a.
 * letter another cases, shows 0.
 *
 * @c: The character to be tested in ASCII code.
 *
 * Return: 1 for letters and 0 for the others.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
