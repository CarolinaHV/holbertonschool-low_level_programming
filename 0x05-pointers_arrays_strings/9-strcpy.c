#include "holberton.h"
/**
 * _strcpy - copies the string.
 * @dest: Destination the string.
 * @src: Source the string.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *pnt = dest;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (pnt);

}
