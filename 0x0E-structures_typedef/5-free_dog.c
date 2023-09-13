#include"dog.h"
#include<stdlib.h>
/**
 * free_dog - func
 *
 * @d: struct element
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
