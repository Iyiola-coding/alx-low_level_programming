#include <stdio.h>

/**
 * main - Starting point
 * Return: 0.
 */

int main(void)
{
	int h = '0';
	int k = '0';

	while (h <= '9')
	{
		while (k <= '9')
		{
			if (!(h > k) || h == k)
			{

				putchar(h);
				putchar(k);
				if (h == '8' && k == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			k++;
		}
		k = '0';
		h++;
	}
return (0);
}
