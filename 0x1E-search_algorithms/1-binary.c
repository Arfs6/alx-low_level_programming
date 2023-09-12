#include <stdio.h>
#include "search_algos.h"

/**
* print_array - print an array
* @array: array to print.
* @start: Index to start printing from
* @stop: Index to stop printing at
*/
void print_array(int *array, size_t start, size_t stop)
{
	size_t current = 0;

	printf("Searching in array: ");

	/* iterate through each element and print it */
	for (current = start; current <= stop; current++)
	{
		if (current != start)
			printf(", ");
		printf("%d", array[current]);
	}
	printf("\n");
}

/**
* binary_search - Search for @value in @array of size @size.
* @array: Array to search in.
* @size: Size of @array.
* @value: Integer to look for in @array.
*
* Return: int greater or equal to zero, index where @value was found.
* -1: @value wasn't found in the array.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
