#include "holberton.h"
/**
 * main - This program prints its name
 * @argc: int
 * @argv: array
 * Return: value 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s \n", argv[i]);
		i++;
	}
	return (0);
}
