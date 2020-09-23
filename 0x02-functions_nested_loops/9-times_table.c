#include "holberton.h"
/**
 * times_table - This function prints the 9 times table, starting with 0
 *
 * Return: Value 0
 */
void times_table(void)
{
	int rows;
	int columns;
	int tabla;
	int dec;
	int dig;

	for (rows = 0; rows <= 9; rows++)
	{
		for (columns = 0; columns <= 9; columns++)
		{
			tabla = rows * columns;
			dec = tabla / 10;
			dig = tabla % 10;

			if (rows == 0 && columns != 0)
			{
				_putchar(' ');
			}
			if (tabla == 0)
			{
				_putchar(dig + '0');
			}
			if (tabla > 0 && tabla < 10)
			{
				_putchar(' ');
				_putchar(dig + '0');
			}
			else if (tabla > 9)
			{
				_putchar(dec + '0');
				_putchar(dig + '0');
			}
			if (rows < 10 && columns < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
