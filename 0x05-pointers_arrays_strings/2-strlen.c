#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: String
 * Return: value s
 */
int _strlen(char *s)
{
	int charCont;

	charCont = 0;
	while (s[charCont] != 0)
	{
		charCont++;
	}
	return (charCont);
}
