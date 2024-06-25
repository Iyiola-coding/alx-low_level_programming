#include "main.h"

/**
 * print alphabet_x10 - Make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
char r;
int t;
t = 0;
while (t < 10)
{
for (r = 'a'; r <= 'z'; r++)
{
_putchar(r);
}
_putchar('\n');
t++;
}

}
