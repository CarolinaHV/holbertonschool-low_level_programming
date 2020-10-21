#include "function_pointers.h"
/**
 * print_name - This function print a name
 * @name: String
 * @f: pointer function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
