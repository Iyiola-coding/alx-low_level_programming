#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory
 * @str: char
 * Return: 0 eachtime
 */

char *_strdup(char *str)
{
	char *tunde;
	int i, a = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	tunde = malloc(sizeof(char) * (i + 1));

	if (tunde == NULL)
		return (NULL);

	for (a = 0; str[a];
			a++)
		tunde[a] = str[a];
	return (tunde);
}
