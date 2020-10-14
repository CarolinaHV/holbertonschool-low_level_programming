#include "holberton.h"
/**
 * _strdup - This function returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: String
 * Return: cpy
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != 0)
	{
		i++;
	}

	cpy = malloc((i + 1) * sizeof(char));
	if (cpy == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		cpy[j] = str[j];
		j++;
	}
	return (cpy);
}
