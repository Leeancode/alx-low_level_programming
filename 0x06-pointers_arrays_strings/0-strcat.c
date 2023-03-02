#include "main.h"

/**
* _strcat - append strings
*@dest: destination file
*@src: source file
*Return: return (dest)
*/

char *_strcat(char *dest, char *src)
{
char *c = dest;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (c);
}
