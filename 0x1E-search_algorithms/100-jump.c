#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* block_linear_search - searches for @value in @array
* within the block marked by @idx and @stop.
* @array: array to find value in
* @idx: beginning of block to start searching from
* @stop: End of block. Stop searching here.
* @value: value to search in @array.
*
* Return: index where value was found
*/
int block_linear_search(int *array, size_t idx, size_t stop, int value)
{
	for (; idx < stop; idx++)
	{
		printf("Value checked array[%lu] = [%i]\n", idx, array[idx]);
		if (array[idx] == value)
			return (array[idx]);
	}

	return (-1);
}

int jump_search(int *array, size_t size, int value)
{
	size_t blockSize, idx = 0;

	if (!array)
			return (-1);

	blockSize = sqrt(size);
	for (idx = 0; idx < size; idx += blockSize)
	{
		if (value <= array[idx])
			break;
		printf("Value checked array[%lu] = [%i]\n", idx, array[idx]);
	}

	if (idx == 0)
			return (-1);

	printf("Value found between indexes [%lu] and [%lu]\n", idx - blockSize, idx);
	return (block_linear_search(array, idx - blockSize, size, value));
}
