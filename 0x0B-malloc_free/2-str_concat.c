#include "holberton.h"
/**
 * str_concat - This function concatenates two strings.
 * @s1: String one
 * @s2: String two
 * Return: conc
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	char *conc;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	conc = malloc(((i + j) + 1) * sizeof(char));
	if (conc == NULL)
	{
		return (NULL);
	}
	for (; k < i ; k++)
	{
		conc[k] = *s1++;
	}
	for (k = i; k <= (i + j); k++)
	{
		conc[k] = *s2++;
	}
	return (conc);
}
