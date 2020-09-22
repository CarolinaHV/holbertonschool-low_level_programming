#include "holberton.h"
/**
 * main - checks for lowercase character
 *
 * Return: Value 0 or 1
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
