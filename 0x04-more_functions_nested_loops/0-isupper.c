#include "main.h"
/**
 * _isupper - find upper case alphabets
 *
 * @c: the character
 *
 * Return: (1) if detected (0) other wise.
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
