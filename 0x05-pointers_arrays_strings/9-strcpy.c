#include "main.h"

/**
*_strcpy - copies string
*@dest: char var to_be checked
*@src: char var tobe checked
*Return: void
*/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];

dest[i] = '\0';
return (dest);
}
