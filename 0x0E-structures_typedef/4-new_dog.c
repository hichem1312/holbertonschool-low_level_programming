#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include "string.h"
/**
 *new_dog - Entry point
 *@name:char
 *@age:integer
 *@owner:n
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
	return (NULL);
else
{
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
}
if (d->name == NULL || d->owner == NULL)
{
	free(d->owner);
	free(d->name);
	free(d);
	return (NULL);
}
	d->name = strcpy(d->name, name);
	d->owner = strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
