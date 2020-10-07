#include "holberton.h"
/**
 * _strstr - This function locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: Value 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (h != '\0')
	{
		if (h == n)
		{
			return (h);
		}
		h++;
	}
	return ('\0');
}
