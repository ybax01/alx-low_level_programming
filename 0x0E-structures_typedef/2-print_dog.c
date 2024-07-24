#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the contents of a struct dog. If any
 * of the members of the struct are NULL, it prints (nil) instead of the
 * member value. If the struct itself is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
