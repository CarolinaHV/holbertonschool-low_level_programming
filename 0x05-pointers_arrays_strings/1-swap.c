#include "holberton.h"

/**
 * swap_int - This function  swaps the values of two integers
 * @a: First integer.
 * @b: Second integer.
 * Return: Value 0.
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *b + *a;
	*a = *b - *a;
}
