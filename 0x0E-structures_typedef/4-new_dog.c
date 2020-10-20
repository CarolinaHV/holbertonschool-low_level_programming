#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - This function creates a new dog.
 * @name: type char
 * @age: type float
 * @owner: type char
 * Return: newInf
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int newN = 0;
	int newO = 0;
	int k;
	dog_t *newInf;

	if (name == NULL || owner == NULL)
		return (NULL);

	newInf = malloc(sizeof(dog_t));
	if (newInf == NULL)
		return (NULL);

	while (name[newN] != '\0')
		newN++;
	while (owner[newO] != '\0')
		newO++;

	newInf->name = malloc(sizeof(char) * newN + 1);
	newInf->owner = malloc(sizeof(char) * newO + 1);
	if (newInf->name == NULL || newInf->owner == NULL)
	{
		free(newInf->name);
		free(newInf->owner);
		free(newInf);
		return (NULL);
	}
	for (k = 0; k <= newN; k++)
	{
		newInf->name[k] = name[k];
	}
	for (k = 0; k <= newO; k++)
	{
		newInf->owner[k] = owner[k];
	}
	newInf->age = age;

	return (newInf);
}
