#include <stdio.h>
/**
 * main - Using for, if-else, putchar
 *
 * This program prints all possible different combinations of two digits.
 *
 * Return: Value 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (!(n == 56 && m == 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
