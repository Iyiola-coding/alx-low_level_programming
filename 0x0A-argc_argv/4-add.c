#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - if string are digit
 * @str: array str
 * Return: 0 each time
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))

		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: 0 each time
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
	if (check_num(argv[count]))
	{
	str_to_int = atoi(argv[count]);
	sum += str_to_int;
	}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
