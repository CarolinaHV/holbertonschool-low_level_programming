#include <stdio.h>
/**
 * main - using putchat
 *
 * This program prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Value 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
