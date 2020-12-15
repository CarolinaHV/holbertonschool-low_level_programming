#include "lists.h"
/**
 * free_dlistint - This function that frees a list_t list.
 * @head: Beginning to the list
 * Return: Value 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_List;

	while (head != NULL)
	{
		free_List = head;
		head = head->next;
		free(free_List);
	}
}
