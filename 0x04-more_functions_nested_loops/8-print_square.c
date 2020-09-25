#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: Print square
 * Return: Value 0
 */
void print_square(int size)
{
	int cont;
	int lin;

	if (size > 0)
	{
		for (cont = 0; cont < size; cont++)
		{
			for (lin = 0; lin < size; lin++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
