#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Value 0
 */
void more_numbers(void)
{
	int cont;
	int num;

	for (cont = 0; cont <= 10; cont++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9 && num <= 14)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
