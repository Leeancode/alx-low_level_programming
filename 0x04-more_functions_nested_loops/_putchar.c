#include <unistd.h>
/*#include "holberton.h"*/

/**
 * _putchar - writes the character c to stout
 * @c: The character to print
 *
 * Return: 1 success
 * On error, -1 is returned, amd error is set 
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
