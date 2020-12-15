#include "lists.h"
/**
 * add_dnodeint_end - This function that adds a new node
 * at the end of a dlistint_t list.
 * @head: Beginning to the list.
 * @n: Numbers to print
 * Return: Value head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *tp = *head;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		tp->next = tmp;
		tmp->prev = tp;
	}
	return (tp);
}
