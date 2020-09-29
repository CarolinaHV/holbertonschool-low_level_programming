#include "holberton.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: String
 * Retutn: Value s
 */
void print_rev(char *s)
{
	int revMsg;
	int i;

	revMsg = 0;

	while (s[revMsg] != '\0')
	{
		revMsg++;
	}
	for (i = revMsg - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
