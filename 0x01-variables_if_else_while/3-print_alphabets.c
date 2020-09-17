#include <stdio.h>
/**
 * main - Using putchar
 *
 * This program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Value 0
 */
int main(void)
{
	int k;
	int l;

	for (k = 97; k < 123; k++)
	{
		putchar(k);
	}
	for (l = 65; l < 91; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
