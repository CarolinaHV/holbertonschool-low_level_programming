#include "lists.h"
/**
 * print_dlistint - This function that prints all the elements
 * of a dlistint_t list.
 * @h: string to print
 * Return: value count
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
