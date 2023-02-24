#include "main.h"
#include <stdio.h>
#include <ctype.h>
int main (void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, isupper(c));
	return (0);
}
