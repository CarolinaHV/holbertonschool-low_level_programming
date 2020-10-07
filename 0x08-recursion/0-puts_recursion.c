#include "holberton.h"
/**
 * _puts_recursion - This function prints a string
 * @s: String
 * Return: value 0
 */
void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
