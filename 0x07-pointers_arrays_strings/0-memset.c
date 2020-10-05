#include "holberton.h"
/**
 * _memset - This function fills memory with a constant byte.
 * @s: pointer to the block of memory to fill.
 * @b: the value to be set
 * @n: the number of bytes to be set to the value.
 * Return: value s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
