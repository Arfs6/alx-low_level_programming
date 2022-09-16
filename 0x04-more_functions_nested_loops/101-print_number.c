#include "main.h"

/**
 * print_number - print a number with _putchar
 * @n: The number
*/
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_putchar(n % 10 + '0');
	if (n / 10)
	print_number(n / 10);
	return;
}
