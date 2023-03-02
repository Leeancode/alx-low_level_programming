#include "main.h"

/**
* _strncat - concats two strings
*
*@dest: string destination
*@src: source strings
*@n: The length of int
*Return: pointer to the resulting
*/

char *_strncat(char *dest, char *src, int n)
{
/*declaration of variable*/

int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
continue;
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
