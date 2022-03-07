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
struct dog *d;
char *n;
char *o;
if ((name != NULL) && (age >= 0) && (owner != NULL))
{
	d = malloc(sizeof(struct dog));
	if (name != NULL)
		n = strdup(name);
	else
		return (NULL);
	if (owner != NULL)
		o = strdup(owner);
	else
		return (NULL);
	if ((d == NULL) || (n == NULL) || (o == NULL))
	{
		free(o);
		free(n);
		free(d);
		return (NULL);
	}
	d->name = n;
	d->owner = o;
	d->age = age;
	return (d);
}
else
return (NULL);
}
