#include "main.h"

/**
 * print_diagonal - print a diagonal on the screen
 * @n: number of \
*/
void print_diagonal(int n)
{
	int i;
	int ln, sp;

	ln = 1;
	while (1)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('\n');
		sp = ln - 1;
		while(sp)
		{
			_putchar(' ');
			sp--;
		}
		_putchar('\\');
		n--;
		ln++;
	}
}
