#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
	 * _strcpy - copy string in src to dest
	* @src: the string to copy
	* @dest: destination pointer
		*
	* Return: The copied string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];
		if (src[i])
			i++;
		else
			break;
	}
	return (dest);
}

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
	dog->name = _strcpy(dog->name, name);
	dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
