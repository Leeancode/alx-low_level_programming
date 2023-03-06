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

	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
			}
			j++;
		}
		i++;
	}
	return (c);
}
