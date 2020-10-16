#include "holberton.h"
/**
 * string_nconcat - This function concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes
 * Return: arr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= j)
	{
		n = j;
	}
	else
	{
		j = n;
	}

	conc = malloc(sizeof(unsigned int) * ((i + j) + 1));

	if (conc == NULL)
	{
		return (NULL);
	}
	for (; s1[k] != '\0' ; k++)
	{
		conc[k] = s1[k];
	}
	for (n = 0; n < j; n++, k++)
	{
		conc[k] = s2[n];
	}
	conc[k] = '\0';
	return (conc);
}
