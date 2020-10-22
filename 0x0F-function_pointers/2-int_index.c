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
	int i = 0;

	if (array != '\0' && size && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
