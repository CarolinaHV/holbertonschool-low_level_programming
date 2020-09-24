#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: Value 0
 */
void print_numbers(void)
{
	int num;

	num = 48;
	while (num < 58)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
