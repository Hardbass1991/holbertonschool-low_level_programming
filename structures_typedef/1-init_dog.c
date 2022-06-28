#include "dog.h"
/**
 * init_dog - initializes an instance of the structure dog
 * @d: input pointer to structure
 * @name: name to assign
 * @age: age to assign
 * @owner: owner to assign
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
