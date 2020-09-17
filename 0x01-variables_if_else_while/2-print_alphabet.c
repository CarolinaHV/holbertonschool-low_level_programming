#include <stdio.h>
/**
 * main - Using putchar
 * This program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: Value 0
 */
int main(void)
{
	int k;

	for (k = 97; k <= 122; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
