#include "main.h"
/**
* *_memset -fills memory with conctant byte
*@s: pointer to constant b
*@b: constant byte b
*@n: bytes to use
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < 0)
	{
		s[i] = b;
		i++;
	}
return (s);
}
