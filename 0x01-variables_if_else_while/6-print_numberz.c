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
	char m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
