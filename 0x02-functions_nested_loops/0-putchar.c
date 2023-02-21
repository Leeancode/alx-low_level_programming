#include <stdio.ha>
#include "main.h"
/**
 * main - prints a string using the putchar function.
 *
 * Return: return (0) success.
*#define LEEANCODE 9
*int main(void)
*{ char message[] = "_putchar";
*	for (int i = 0; i < LEEANCODE; i++)
*	{
*		if (message[i] == '\0')
*		{
*			putchar('\n');
*			break;
*		}
*		else
*			putchar(message[i]);
*	}
*	return (0);
*}
*/

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int i, j;

	/* j = sizeof(str) / sizeof(int);*/
	j = 8;
	for (i = 0; i < j; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');

	return (0);
}
