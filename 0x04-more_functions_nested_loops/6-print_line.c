#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times
 * Return: Value 0
 */
void print_line(int n)
{
	int cont;

	if (n > 0)
	{
		for (cont = 0; cont < n; cont++)
		{
			_putchar(95);
		}
	}
       	_putchar('\n');
}
