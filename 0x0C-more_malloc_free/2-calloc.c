#include <stdlib.h>
#include <string.h>
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
	void *ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL); /* insufficient memory */

	memset(ptr, 0, (size * nmemb));

	return (ptr);
}
