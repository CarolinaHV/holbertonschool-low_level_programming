#include <stdio.h>
/**
 * main - 
 * @argc: int
 * @argv: string
 * Return: value 0
 */
int main (int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d \n", argc -1);
	}
	return (0);
}
