#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * Return last digit (success)
*/
int print_last_digit(int n)
{
	int ret;

	if (n < 0)
	n = n * -1;
	ret = n % 10;
	return (ret);
}
