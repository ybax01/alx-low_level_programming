#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: Pointer to the dog_t
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free name and owner */
		free(d->name);
		free(d->owner);

		/* Free structure */
		free(d);
	}
}

