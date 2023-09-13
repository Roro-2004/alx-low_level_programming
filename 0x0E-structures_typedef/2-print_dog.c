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
		printf("my_dog.name = %s\n", d->name ? d->name : "(nil)");
		printf("my_dog.age = %f\n", d->age);
		printf("my_dog.owner = %s\n", d->owner ? d->owner : "(nil)");
	}
}
