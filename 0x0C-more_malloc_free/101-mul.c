#include <stdlib.h>
#include "main.h"

void print_error(void);
int get_len(char *num1, char *num2, unsigned int *len1, unsigned int *len2);

/**
 * main - multiply two numbers
 * @ac: argument count
 * @av: argument vector
 *
 * Return: answer to multiplication
 * exit with 98 if fails
*/
int main(int ac, char **av)
{
	unsigned int len1, len2, len;
	short int flag = 1;
	char *num1, *num2;

	if (ac != 3)
	{
		print_error(); /* invalid arguments */
		exit(98);
	}

	/* get lenght of arguments */
	num1 = *(av + 1);
	num2 = *(av + 2);
	flag = get_len(num1, num2, &len1, &len2);
	if (flag)
	{
		print_error();
		exit(98);
	}
	return (0);
}

/**
 * print_error - print error
*/
void print_error(void)
{
	char err[] = "error\n";
	int i;

	for (i = 0; err[i]; ++i)
	{
		_putchar(err[i]);
	}
}

/**
 * get_len - get lenght of arguments
 * @num1: 1st argument
 * @num2: 2nd argument
 * @len1: lpointer to len1
 * @len2: pointer to len2
 *
 * Return: 0 (success)
 * 1 (has non numerical values)
*/
int get_len(char *num1, char *num2, unsigned int *len1, unsigned int *len2)
{
	unsigned int i = 0;

	*len1 = *len2 = 0;
	for (i = 0; num1[i]; ++i)
	{
		if (num1[i] <= '0' || num1[i] >= '9')
			return (1);
		*len1++;
	}

	for (i = 0; num2[i]; ++i)
	{
		if (num2[i] <= '0' || num2[i] >= '9')
			return (1);
		*len2++;
	}

	return (0);
}
