#include "holberton.h"
/**
 * _strspn - This function gets the length of a prefix substring.
 * @s: String 1
 * @accept: String 2
 * Return: Value 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m;
	unsigned int n;
	unsigned int length;

	length = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				length++;
				break;
			}
		}
		if (accept[n] == '\0')
		{
			return (length);
		}
	}
	return (length);
}
