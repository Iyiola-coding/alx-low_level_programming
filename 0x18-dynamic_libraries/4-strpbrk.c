#include "main.h"

/**
 * _strpbrk - function name
 * @s: input one
 * @accept: inpute two
 * Return: 0 eachtime
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
