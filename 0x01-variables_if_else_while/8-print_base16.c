#include <stdio.h>
/**
 * main - using putchar
 *
 * This program prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Value 0
 */
int main(void)
{
	char n;
	char l;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar(10);

	return (0);
}
