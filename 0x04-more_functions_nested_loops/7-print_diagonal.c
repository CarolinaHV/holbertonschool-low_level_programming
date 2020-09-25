#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: print \
 *
 * Return: value 0
 */
void print_diagonal(int n)
{
	int posc;
	int esp;

	if (n > 0)
	{
		for (posc = 0; posc < n; posc++)
		{
			if (posc == 0)
			{
				_putchar(92);
			}
			if (posc > 0)
			{
				for (esp = 0; esp < posc; esp++)
				{
					_putchar(' ');
				}
				_putchar(92);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
