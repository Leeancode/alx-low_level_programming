#include "main.h"
/**
*_islower - function to check if a character is lower or upper case.
*@c: The character to be checked.
* Return: 0 success.
*
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
