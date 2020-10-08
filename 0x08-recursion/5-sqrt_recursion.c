#include "holberton.h"
/**
 * _sqrt_recursion - This function returns
 * the natural square root of a number.
 * @n: Number integer
 * Return: Value 0
 */
int _sqrt_recursion(int n)
{
	int r = 1;

	return (sqrt1(n, r));
}

/**
 * sqrt1 - function square
 * @n: Number integer
 * @r: number sqrt
 * Return: Value r
 */

int sqrt1(int n, int r)
{
	if (n > (r * r))
	{
		r = sqrt1(n, r + 1);
	}
	else if (n < (r * r))
	{
		return (-1);
	}
	return (r);
}
