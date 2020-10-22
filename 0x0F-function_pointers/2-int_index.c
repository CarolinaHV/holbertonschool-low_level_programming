#include "function_pointers.h"
/**
 * int_index - That function executes a function given
 * as a parameter on each element of an array.
 * @array: Array of number.
 * @size: Size of array.
 * @cmp: Pointer of array.
 * Return: Value -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
