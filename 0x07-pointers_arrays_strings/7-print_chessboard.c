#include "main.h"

/**
 * print_chessboard - function name
 * @a: array
 * Return: 0 eachtime
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n')
	}
}
