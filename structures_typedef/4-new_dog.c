#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates an instance of the structure dog
 * @name: input name for new structure
 * @age: input age for new structure
 * @owner: input owner for new structure
 *
 * Return: pointer to created instance of dog, or NULL if that fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	p->name = malloc(sizeof(char *));
	p->owner = malloc(sizeof(char *));
	if (!p)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	strcpy(p->name, name);
	strcpy(p->owner, owner);
	p->age = age;
	return (p);
}
