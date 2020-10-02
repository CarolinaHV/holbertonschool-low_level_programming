#include "holberton.h"
/**
 * _strncat - This function concatenates two string with restric
 * @dest: Firts string
 * @src: second string
 * @n: number characteres
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
