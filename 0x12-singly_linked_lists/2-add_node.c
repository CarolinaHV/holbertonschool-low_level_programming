#include "lists.h"
#include <string.h>
/**
 * add_node - This function that adds a new node at the beginning
 * of a list_t list.
 * @head: Beginns of the list
 * @str: value of string
 * Return: Value new
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int longitud = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[longitud])
		longitud++;

	new->str = strdup(str);
	new->len = longitud;
	new->next = NULL;

	new->next = *head;
	*head = new;

	return (new);
}
