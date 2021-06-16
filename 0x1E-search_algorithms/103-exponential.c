#include "search_algos.h"

/**
 * findes - helper to find a value in an array
 * @array: int
 * @start: int
 * @end: int
 * @value: int
 * Return: int
 */

int finder(int *array, int init, int finish, int value)
{
	int mid, x;

	printf("Searching in array:");

	for (x = init; x <= finish; x++)
		if (x == init)
			printf(" %d", array[x]);
		else
			printf(", %d", array[x]);

	printf("\n");


	if ((finish == init) && (value != array[init]))
		return (-1);

	mid = init + ((finish - init) / 2);

	if (value == array[mid])
		return (mid);
	if (value < array[mid])
		return (finder(array, init, mid - 1, value));
	else
		return (finder(array, mid + 1, finish, value));

}


/**
 * exponential_search - search algo via explonent
 * @array: int
 * @size: size_t
 * @value: int
 * Return: int
 */

int exponential_search(int *array, size_t size, int value)
{
	int exp, prev = 0;

	if (!array)
		return (-1);

	for (exp = 1; prev <= (int)size - 1; exp = exp * 2)
	{

		if (exp >= (int)size)
			exp = size - 1;

		if (array[exp] == value)
			return (exp);

		else if (value < array[exp] || exp == (int)size - 1)
		{

			printf("Value found between indexes [%d] and [%d]\n", prev, exp);
			return (finder(array, prev, exp, value));
		}

		else
			printf("Value checked array[%d] = [%d]\n", exp, array[exp]);
		prev = exp;

	}
	return (-1);
}
