#include "holberton.h"
/**
 * create_array - This function creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int
 * @c: char
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(size * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
