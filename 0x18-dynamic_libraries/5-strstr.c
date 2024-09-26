#include <stdio.h>
#include "main.h"

/**
 * _strstr - function name
 * @haystack: input one
 * @needle: input two
 * Return: 0 eachtime
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
