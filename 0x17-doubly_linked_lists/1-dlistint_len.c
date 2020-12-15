#include "lists.h"
/**
 * dlistint_len - This function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: string
 * Return: Value count
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
