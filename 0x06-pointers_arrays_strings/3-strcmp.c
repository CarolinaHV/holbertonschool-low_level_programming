#include "holberton.h"
/**
 * _strcmp - This function compares two strings.
 * @s1: First posicion string
 * @s2: Second posicion string
 * Return: value a - b
 */
int _strcmp(char *s1, char *s2)
{
	int a = *s1;
	int b = *s2;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s2++;
			s1++;
		}
		else
		{
			break;
		}		    
	}
	return (a - b);
}
