#include <stdio.h>
/**
 * main - Starting point
 * Return: Each time 0.
 */
int main(void)
{
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
