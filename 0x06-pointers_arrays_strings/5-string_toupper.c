#include "holberton.h"
/**
 * string_toupper - This function that changes all lowercase
 * letters of a string to uppercase.
 * @str: String
 * Return: value o
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
