#include "main.h"

/**
 * infinite_add - add 2 numbers
 * @n1: text rep of 1st number to add
 * @n2: text rep of 2nd to add
 * @r: pointer to buffer
 * Return: pointer to call function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digit = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + 1) != '\0')
			i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digit >= (size_r - 1))
			return (0);
		*(r + digit) = (temp_tot % 10) + '0';
		digit++;
		j--;
		i--;
	}
	if (digit == size_r)
		return (0);
	*(r + digit) = '\0';
	rev_string(r);
	return (r);
}
