#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: Pointer to the dog_t structure to be freed.
 *
 * Description: This function frees the memory allocated for a dog_t structure
 * and its members (name and owner). If the pointer d is NULL, it does nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the allocated name and owner strings */
		free(d->name);
		free(d->owner);
		
		/* Free the dog structure itself */
		free(d);
	}
}

