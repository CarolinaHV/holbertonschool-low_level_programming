#include "holberton.h"
/**
 * puts2 - This function prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: String of number.
 * Return: Value 0
 */
void puts2(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}
	}
	_putchar('\n');
}
