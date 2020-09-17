#include <stdio.h>
/**
 * main - using putchar
 *
 * This program prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Value 0
 */
int main(void)
{
	int r;

	for (r = 122; r >= 97; r--)
	{
		putchar(r);
	}
	putchar('\n');

	return (0);
}
