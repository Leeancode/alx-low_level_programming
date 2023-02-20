#include <stdio.h>
/**
*main- prints alphabets in lowercase in reverse order.
*
*Return: return (0) success
*/

int main(void)
{
int i;
for (i = 122; i > 96;)
{putchar(i);
i--;
}
putchar('\n');

return (0);
}
