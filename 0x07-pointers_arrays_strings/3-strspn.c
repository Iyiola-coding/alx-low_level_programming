#include "main.h"

/**
 * _strspn - function name
 * @s: input
 * @accept: input
 * Return: 0 eachtime
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			elsa if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
