#include "lists.h"
/**
 * add_dnodeint - This function add a new node at the beginning.
 * @head: Beginning of the list
 * @n: Integres to print
 * Return: value head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;
	newNode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;

	return (newNode);
}
