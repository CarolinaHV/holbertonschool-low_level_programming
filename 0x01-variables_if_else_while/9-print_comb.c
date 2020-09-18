#include <stdio.h>
/**
 * main - using putchar
 *
 * This program prints all possible combinations of single-digit numbers,
 * separated by ','.
 *
 * Return: Value 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
