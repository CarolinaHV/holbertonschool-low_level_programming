#include "holberton.h"

/**
 * print_most_numbers -  prints the numbers prime, from 0 to 9
 *
 * Return: Value 0
 */
void print_most_numbers(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		if (d != 50 && d != 52)
		{
			_putchar(d);		}
	}
	_putchar('\n');
}
