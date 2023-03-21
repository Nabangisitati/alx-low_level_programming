#include <stdlib.h>
#include "main.h"

/**
 * free_dog - frees memory allocated to dog struct
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
