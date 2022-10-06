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
	unsigned int i;
	void *ptr;
	char *cptr;

	i = 0;
	ptr = malloc(nmemb * size);
	cptr = ptr;
	for (i = 0; i < nmemb; i++)
		cptr[i] = 0;
	ptr = cptr;

	return (ptr);
}
