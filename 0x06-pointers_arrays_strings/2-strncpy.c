#include "main.h"
/**
* _strncpy - function to copy strings
*
*@dest: destination string
*@src: source string
*@n: integer
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
/*declare variable*/

int i;

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
