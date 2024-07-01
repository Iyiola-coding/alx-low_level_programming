#include "main.h"
/**
 * _strlen - unction that returns the length of a string.
 * @s: is the character of the string
 * Return: 0.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\n')
	{
	len++;
	}
	return (len);
}
