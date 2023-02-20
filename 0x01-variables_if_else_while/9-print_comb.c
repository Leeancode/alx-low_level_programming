#include <stdio.h>
/**
*main - prints combinations of numbers separated by comma and whitespace.
*
*Return: return (0) success.
*/
int main(void)

{
int i;

for (i = 48; i < 58;)
{
putchar(i);
if (i != 57)
{putchar (',');
putchar (' ');
}
i++;
}
putchar('\n');

return (0);
}
