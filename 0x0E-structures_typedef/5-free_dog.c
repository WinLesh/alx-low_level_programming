#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a funtion that frees dogs.
 * @d: The dog to be freed
 * Return: no return.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
