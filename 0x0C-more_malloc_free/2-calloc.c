#include "holberton.h"
/**
 * _calloc - This function allocates memory for an array, using malloc.
 * @nmemb: Number of elements
 * @size: Number of bytes
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int cal;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	cal = nmemb * size;

	arr = malloc(cal);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < cal; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
