#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array an initialize it
 * @nmemb: number of elements in array
 * @size: size in bytes of the array
 *
 * Return: pointer to array
 * NULL if nmemb or size is NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL); /* insufficient memory */

	i = 0;
	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;

	return (ptr);
}
