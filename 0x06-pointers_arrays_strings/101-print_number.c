#include "main.h"

/**
 * print_number - print numbers with _putchar
 * @n: the number to be printed
*/
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n / 10)
	print_number(n / 10);
	_putchar(n % 10 + '0');
}
