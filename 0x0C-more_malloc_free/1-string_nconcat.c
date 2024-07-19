#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: no of element to concatenate.
 * Return: pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, b, c;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (i + b + 1));
	if (s == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		s[c] = s1[c];
	for (c = 0; c < b; c++)
		s[c + 1] = s2[c];
	s[i + b] = '\0';
	return (s);
}
