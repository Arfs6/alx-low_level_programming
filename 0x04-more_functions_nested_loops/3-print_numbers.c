#include <unistd.h>
#include "main.h"

/**
 * print_numbers - print numbers from 0-9
*/
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
}