#include "main.h"

/**
 * more_numbers - print numbers from 0-9 10X
*/
void more_numbers(void)
{
	int num;
	int i;
	int j;

	i = 10;
	while (i--)
	{
		j = 0;
		num = 0;
		while (j < 15)
		{
			if (num >= 10)
			_putchar(num /10 + '0');
			_putchar(num % 10 + '0');
			num++;
			j++;
		}
			_putchar('\n');
	}
}
