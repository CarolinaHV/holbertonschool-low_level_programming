#include "holberton.h"
/**
 * _strlen_recursion - function returns the length of a string
 * @s: String
 * Return: Contador
 */
int _strlen_recursion(char *s)
{
	int cont = 0;

	if (*s != 0)
	{
		cont = _strlen_recursion(s + 1);
		cont++;
	}
	return (cont);
}
