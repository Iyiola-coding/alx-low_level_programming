#include <stdio.h>
/**
 * main - Starting point
 * Return: Each time 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}

	for (i =0; i < 26; i++)
	{
		putchar('A' + i);
	}

	putchar('\n');

	return (0);
}
