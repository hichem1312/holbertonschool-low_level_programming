#include "dog.h"
#include <stddef.h>
/**
 *init_dog - Entry point
 *@d:char
 *@name:char
 *@age:integer
 *@owner:n
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
