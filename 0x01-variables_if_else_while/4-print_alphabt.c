#include <stdio.h>

/**
 * main - Starting point
 * Return: Each time 0.
 */

int main(void)
{
int lowercase = 'a';
while (lowercase <= 'z')
{
	if (lowercase == 'e' || lowercase == 'q')
	{lowercase += 1;
	}
	putchar(lowercase);
	lowercase += 1;
}
putchar('\n');
return (0);
}
