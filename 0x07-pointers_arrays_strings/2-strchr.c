#include "main.h"

/**
 * _strchr - function name
 * @s: input one
 * @c: input two
 * Return: 0 eachtime
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
		return (&s[i]);
	}
	return (0);

}
