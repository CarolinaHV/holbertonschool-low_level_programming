#include <stdio.h>
/**
 * main - This program prints the number of arguments
 * passed into it.
 * @argc: integer count
 * @argv: array vector
 * Return: value 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
