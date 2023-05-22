#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - main function
 * @d: pointer to dog
 * Description: a function that frees dogs
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
