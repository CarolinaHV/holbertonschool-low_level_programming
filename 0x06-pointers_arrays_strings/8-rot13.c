#include "holberton.h"
/**
 * rot13 - This function encodes a string using rot13.
 * @str: String
 * Return: str
 */
char *rot13(char *str)
{
	char rot1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 1; j < 53; j++)
		{
			if (str[i] == rot1[j])
			{
				str[i] = rot2[j];
				break;
			}
		}
	}
	return (str);
}
