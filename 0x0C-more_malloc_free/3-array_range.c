#include "holberton.h"
/**
 * array_range - This function creates an array of integers.
 * @min: first integer
 * @max: last integer
 * Return: value
 */
int *array_range(int min, int max)
{
	int i;
	int b = 0;
	int nums;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	nums = max - min;

	arr = malloc(sizeof(int) * nums + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; b++, i++)
	{
		arr[b] = i;
	}
	return (arr);
}
