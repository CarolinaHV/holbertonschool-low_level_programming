#include "lists.h"
#include <string.h>
/**
 * add_node_end - This function that adds a new node at the end
 * of a list_t list.
 * @head: Beginning to the list
 * @str: String to list
 * Return: Value 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new;
	unsigned int longt = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[longt])
		longt++;

	new->str = strdup(str);
	new->len = longt;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (0);
}
