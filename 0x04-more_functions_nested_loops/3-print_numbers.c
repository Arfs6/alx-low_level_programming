#include "main.h"

/**
 * print_numbers - print numbers from 0-9
*/
void print_numbers(void)
{
	int i;
	int num;

	num = 0;
	i = 10;
	while(i--)
	{
		_putchar(num % 10 + '0');
		num++;
	}
	_putchar('\n');
}
