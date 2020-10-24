#include "variadic_functions.h"
/**
 * sum_them_all - This function returns the sum of all its parameters.
 * @n: Number of parameters
 * Return: parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int s, num;

	va_list parameters;

	va_start(parameters, n);

	s = 0;

	for (i = 0; i < n; ++i)
	{
		num = va_arg(parameters, int);
		s = s + num;
	}
	va_end(parameters);
	return (s);
}
