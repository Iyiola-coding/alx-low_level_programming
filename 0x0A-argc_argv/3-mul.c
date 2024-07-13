#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: int converted from the string
 */

int _atoi(char *s)
{
	int a, b, c, len, d, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')

				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)

		return (0);
	return (c);
}

/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 at success, 1 at Error
 */

int main(int argc, char *argv[])
{
	int result, one, two;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	one = _atoi(argv[1]);
	two = _atoi(argv[2]);
	result = one * two;
	printf("%d\n", result);

	return (0);
}
