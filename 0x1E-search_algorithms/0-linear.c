#include <stdio.h>
#include "search_algos.h"

/**
* linear_search - Search for @value in @array of size @size.
* @array: Array to search in.
* @size: Size of @array.
* @value: Integer to look for in @array.
*
* Return: int greater or equal to zero, index where @value was found.
* -1: @value wasn't found in the array.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%i]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}


	return (-1);
}
