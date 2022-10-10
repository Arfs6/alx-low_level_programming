#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(*dog));

	dog->name = strdup(name);
	dog->age = age;
	dog->owner = strdup(owner);

	return (dog);
}
