#include <stdio.h>
/**
 * main - This program prints all arguments it receives,
 * print one argument per line, ending with a new line.
 * @argc: integer count
 * @argv: array vector
 * Return: value 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s", argv[i]);
		putchar('\n');
		i++;
	}
	return (0);
}
