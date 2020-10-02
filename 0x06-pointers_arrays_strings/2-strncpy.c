#include "holberton.h"
/**
 * _strncpy - This function copies a string
 * @dest: First string
 * @src: Second string
 * @n: number characteres
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;
	int l = 0;

	while (l < n && src[l] != '\0')
	{
		dest[k] = src[l];
		k++;
		l++;
	}
	for (; l < n; l++)
	{
		dest[l] = '\0';
	}
	return (dest);
}
