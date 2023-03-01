#include "main.h"
#include <stdio.h>

/**
*print_array - prints elements on an arr
*of integers followed by newline
*
*@a: array to check
*@n: number of array elements to print
*Return: void
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i != (n - 1))
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
printf("\n");
}
