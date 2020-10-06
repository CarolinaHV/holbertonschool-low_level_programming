#include "holberton.h"
/**
 * _strpbrk - This function gets the length of a prefix substring.
 * @s: String 1
 * @accept: String 2
 * Return: Value 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int k;

	while (*s != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
