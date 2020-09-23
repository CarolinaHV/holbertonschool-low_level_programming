#include "holberton.h"
/**
 * jack_bauer - This function that prints every minute of the day,
 * starting from 00:00 to 23:59.
 *
 * Return: Value 0
 */
void jack_bauer(void)
{
	int hora;
	int min;
	int day;

	hora = 0;
	while (hora <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			day = hora / 10;
			_putchar('0' + day);
			day = hora % 10;
			_putchar('0' + day);
			_putchar(':');
			day = min / 10;
			_putchar('0' + day);
			day = min % 10;
			_putchar('0' + day);
			_putchar('\n');
			min++;
		}
		hora++;
	}
}
