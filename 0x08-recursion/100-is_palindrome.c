#include "main.h"

int check_pal(char *s, int i, int len);
int strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 if its not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string to cal the lenght
 * Return: the lenght of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: lenght of the string
 * Return: 1 if palindrome, o if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
