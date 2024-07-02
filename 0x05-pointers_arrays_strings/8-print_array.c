#include "main.h"
#include <stdio.h>

/**
 * print_array - function name
 * @n: function parameter one
 * @a: parameter two
 */

void print_array(int *a, int n)
{
int i;

for  (i = 0; i < n; i++)
{
printf("%d", a[i]);

	if (i < n - 1)
		printf(", ");
}
	printf("\n");
}
