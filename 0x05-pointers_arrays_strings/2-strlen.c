#include "main.h"
/**
*_strlen - calculate the len of strings
*
*@s: string input to check
*Return: 0
*/

int _strlen(char *s)
{
int len = 0;

while (s[len])
len++;
return (len);
}
