#include "holberton.h"
/**
 * puts_half - This function prints half of a string.
 * @str: String of numbers
 * Return: Value 0
 */
void puts_half(char *str)
{
	int len;
	int ind;

	len = 0;
	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			ind = len / 2;
		}
		else
		{
			ind = len - ((len - 1) / 2);
		}
		len++;
	}
	for (; ind < len; ind++)
	{
		_putchar(str[ind]);
	}
	_putchar('\n');
}
