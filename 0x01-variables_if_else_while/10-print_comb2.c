#include <stdio.h>
/**
 * main - using putchar
 *
 * This program prints the numbers from 00 to 99,
 * the numbers must be separated by ',' followed by a space.
 *
 * Return: Value 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			putchar(n);
			putchar(m);

			if (n == 57 && m == 57)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
