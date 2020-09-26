#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: Print square
 * Return: Value 0
 */
void print_triangle(int size)
{
	int posc;
	int lin;

	if (size > 0)
	{
		for (posc = 0; posc < size; posc++)
		{
			for (lin = 1; lin < size - posc; lin++)
			{
				_putchar(' ');
			}
		 
			_putchar(35);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
