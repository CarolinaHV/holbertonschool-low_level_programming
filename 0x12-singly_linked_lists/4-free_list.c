#include "lists.h"
#include <stdlib.h>
/**
 * free_list - This function that frees a list_t list.
 * @head: Beginning to the list
 * Return: Value 0
 */
void free_list(list_t *head)
{
	list_t *free_List;

	while (head != NULL)
	{
		free_List = head;
		head = head->next;
		free(free_List->str);
		free(free_List);
	}
}
