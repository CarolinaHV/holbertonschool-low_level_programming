#include "hash_tables.h"
/**
 * hash_table_set - This function that adds an element to the hash table.
 * In case of collision, add the new node at the beginning of the list
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key, can not be an empty string
 * @value:  is the value associated with the key, must be duplicated,
 * and can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *node = NULL;
	hash_node_t *tmp = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (ht == NULL && key == NULL)
	{
		return (0);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
   
	if (strcmp(key, tmp->key) == 0)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}
	tmp = tmp->next;

	node->value = strdup(value);
	node->key = strdup(key);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
