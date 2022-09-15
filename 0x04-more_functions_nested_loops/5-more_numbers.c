#include "main.h"

/**
 * print_number - print the number
 * @n: the number
*/
void print_number(int n)
{
	if (n <= 9)
	_putchar(n % 10 + '0');
	else
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}

/**
 * more_numbers - print numbers from 0-9 10X
*/
void more_numbers(void)
{
	int num;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j < 15)
		{
			print_number(j);
			j++;
		}
			_putchar('\n');
	}
}
