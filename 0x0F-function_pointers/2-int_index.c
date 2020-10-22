#include "function_pointers.h"
/**
 * int_index - This function executes a function given.
 * @array: Array of number.
 * @size: Size of array.
 * @cmp: Pointer of array.
 * Return: Value -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		if (size <= 0)
		{
			return (-1);
		}
	}
	return (-1);
}
