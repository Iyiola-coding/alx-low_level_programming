#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: To be checked
 * Return: 1 for alphabetic character or 0 fior otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
