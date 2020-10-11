#include "holberton.h"
/**
 * main - This program prints all arguments it receives.
 * print one argument per line, ending with a new line
 * @argc: int
 * @argv: array
 * Return: Value 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s", argv[i]);
		_putchar('\n');
		i++;
	}
	return (0);
}
