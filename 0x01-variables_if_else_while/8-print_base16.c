#include <stdio.h>
/**
*main -Prints numbers and lowercase alphabets in base 16.
*
*Return: return (0) sucess
*
*/

int main(void)
{
int i;

for (i = 48; i < 58;)
{
putchar(i);
i++;
}

for (i = 97; i < 103;)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}

