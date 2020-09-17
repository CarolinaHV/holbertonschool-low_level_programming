#include <stdio.h>
/**
 * main - using variable char and putchar
 *
 * This program prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using variable of type char.
 *
 * Return: Value 0
 */
int main(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
