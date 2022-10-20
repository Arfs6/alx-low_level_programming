#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the contents of a list_t link list
 * @h: pointer to first element
 *
 * Return: number of elements printed
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (1)
	{
		if (h->str)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nill)\n");
		i++;
		if (!h->next)
			break;
		h = h->next;
	}

	return (i);
}
