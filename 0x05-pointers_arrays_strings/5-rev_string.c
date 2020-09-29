#include "holberton.h"
/**
 * rev_string - This function reverses a string
 * @s: String
 * Return: Value 0
 */
void rev_string(char *s)
{
	int str;
	int rev;
	char i;

	str = 0;
	while (s[str] != '\0')
	{
		str++;
	}

	for (rev = 0; rev < str / 2; rev++)
	{
		i = s[rev];
		s[rev] = s[str - rev - 1];
		s[str - rev - 1] = i;
	}
}
