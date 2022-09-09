#include <stdio.h>

/**
 * main - Start of program
	*
 * Return: Always 0
*/
int main(void)
{
	char alpha = 'a';
	char l_alpha = 'z';

	l_alpha++;
	char x = 26;
	char y = 0;

	while (y != x)
	{
		putchar(alpha);
		alpha++;
		y++;
		if (alpha == l_alpha)
		{
			y = 0;
			alpha = 'A';
		}
	}
	putchar('\n');
	return (0);
}
