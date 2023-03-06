#include "main.h"
/**
* leet - function to encode strings int0 1337
*@c: strings to encode
*Return:  encoded strings
*/

char *leet(char *c)
{
	int i, j;
	/*array initialisatiob*/
	char a[] = "aAeEoOtTIl";
	char b[] = "4433007711";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (a[j] == c[i])
			c[i] = b[j];
		}
	}
	return (c);
}
