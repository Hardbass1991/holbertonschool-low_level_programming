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
	char *name_, *owner_;
	
	name_ = malloc(sizeof(name));
	owner_ = malloc(sizeof(owner));
	strcpy(name_, name);
	strcpy(owner_, owner);
	/**printf("%s\n", name_);
	printf("%s\n", owner_);*/
	p = malloc(sizeof(dog_t));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	p->name = name_;
	p->age = age;
	p->owner = owner_;
	return (p);
}
