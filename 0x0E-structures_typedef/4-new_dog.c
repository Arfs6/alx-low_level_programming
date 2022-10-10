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

	dog = malloc(sizeof(dog));
	if (!dog)
		return (NULL);

	dog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (!dog->owner)
		{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = strcpy(dog->owner, owner);

	return (dog);
}
