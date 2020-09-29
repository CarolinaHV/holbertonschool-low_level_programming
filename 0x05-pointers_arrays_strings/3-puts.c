#include "holberton.h"
/**
 * _puts - This function prints a string, followed by a new line.
 * @str: String
 * Return: value 0
 */
void _puts(char *str)
{
	int msg;

	msg = 0;
	while (str[msg] != '\0')
	{
		_putchar(str[msg]);
		msg++;
	}
	_putchar('\n');
}
