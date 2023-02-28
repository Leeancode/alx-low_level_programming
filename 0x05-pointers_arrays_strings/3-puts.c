#include "main.h"

/**
*_puts - function that output strings with
*followed by \newline
*@str: string parameter
*Return: returns nothing
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
++str;
}
_putchar('\n');
}
