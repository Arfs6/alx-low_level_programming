#include "main.h"

/**
 * clear_bit - set a bit to 0
 * @n: number to set the bit in
 * @index: index of the bit
 *
 * Return: 1 success
 * -1 invalid index or pointer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;
	unsigned long int i = 0;

	if (index > 63 || !n)
		return (-1);

	temp = *n;
	temp >>= index;
	temp &= 0;

	for (i = 0; i < index; ++i)
		{
			temp <<= 1;
	temp |= 1;
}

	*n &= temp;

	return (1);
}
