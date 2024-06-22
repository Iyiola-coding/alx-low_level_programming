#include <stdio.h>
/**
 * main - Starting point
 * Return: 0.
 */

int main(void)
{
	int r = '0';

	while (r <= '9')
	{
		putchar(r);
		if (r != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++r;
	}
	putchar('\n');
	return (0);
}
