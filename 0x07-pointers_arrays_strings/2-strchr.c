#include "holberton.h"
/**
 * _strchr - This function locates a character in a string.
 * @s: This is a string
 * @c: This is a character.
 * Return: Value s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			return ('\0');
		}
		s++;
	}
	return (0);
}
