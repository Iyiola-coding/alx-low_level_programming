#include "main.h"
/**
 * _strlen - unction that returns the length of a string.
 * @s: is the character of the string
 * Return: 0.
 */

int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\n')
	{
	total_len++;
	}
	return (total_len);
}
