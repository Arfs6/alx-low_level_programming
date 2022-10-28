#include "main.h"

/**
 * get_endianness  - get the type of endianness of the current machine
 *
 * Return: 1 if little endianness
 * 0 if big endianness
 */
int get_endianness(void)
{
	unsigned int temp, temp2;

	temp = temp2 = 1;
	temp << 10;
	if (temp > temp2)
		return (0);

	return (1);
}
