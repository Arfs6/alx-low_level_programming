#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print info of dog
 * @d: pointer to dog
*/
void print_dog(struct dog *d)
{
	if (!d)
		return; /* dog is null */

	d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	d->age ? printf("Age: %.6f\n", d->age) : printf("Age: (nil)\n");
	d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
