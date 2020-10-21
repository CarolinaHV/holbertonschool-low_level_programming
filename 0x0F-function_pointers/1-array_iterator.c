#include "function_pointers.h"
/**
 * array_iterator - That function executes a function given
 * as a parameter on each element of an array.
 * @array: Array of numbers
 * @size: Size of array.
 * @action: Pointer the function.
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (array && action)
		{
			action(array[i]);
		}
	}
}
