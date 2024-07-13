#include "main.h"

/**
 * _isdigit - check for a digit or character parameter
 *
 * @c: parameter
 *
 * Return: 1 if its a digit and zero if othewise.
 */

int _isdigit(int c)
{
	if  (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
