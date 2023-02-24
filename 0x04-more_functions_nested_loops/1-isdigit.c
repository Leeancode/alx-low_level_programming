#include "main.h"
/**
 * _isdigit - checks if parameter is a number 0 to 9
 * @n: input number
 * Return: 1 if is a number (0-9), 0 in other cases
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
