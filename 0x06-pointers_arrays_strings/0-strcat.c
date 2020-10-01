#include "holberton.h"
/**
 * _strcat - This function concatenates two strings
 * @dest: First string
 * @src: Second string
 * Return: Value 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
