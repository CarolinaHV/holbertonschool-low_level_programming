#include <stdio.h>
/**
 * main - using putchar
 *
 * This program prints the alphabet in lowercase,
 * except q and e followed by a new line.
 *
 * Return: Value 0
 */
int main(void)
{
	int k;

	for (k = 97; k < 123; k++)
	{
		if (k != 101 && k != 113)
		{
			putchar(k);
		}
	}
	putchar('\n');

	return (0);
}
