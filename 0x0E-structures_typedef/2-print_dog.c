#include"dog.h"
#include<stdio.h>
/**
 * print_dog - a func
 * @d: an element
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("my_dog.name = %s\n", d->name);
		printf("my_dog.age = %f\n", d->age);
		printf("my_dog.owner = %s\n", d->owner);
	}
}
