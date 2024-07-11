#include "main.h"

/**
 * _puts_recursion - function name
 * @s: input
 * Return: 0 eachtime
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
