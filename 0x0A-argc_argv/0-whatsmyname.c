#include "stdio.h"

/**
 * main - prints its name, followed by a new line.
 * @argc: command line arguments number
 * @argv: command line argument that array contains
 * Return: 0 eachtime
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
