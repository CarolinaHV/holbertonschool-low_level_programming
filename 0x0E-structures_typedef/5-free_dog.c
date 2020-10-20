#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - This function frees dogs.
 * @d: struct dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != '\0')
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
