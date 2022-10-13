#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
 * main - print the of code of the current file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 success
 * 1 invalid arguments
 * 2 invalid size
*/
int main(int ac, char **av)
{
	int size, i = 0;
	int (*ptr)(int, char **) = main;
	const char *hex;
	ud_t ud_obj;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(av[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ud_init(&ud_obj);
	ud_set_mode(&ud_obj, 64);
	ud_set_input_buffer(&ud_obj, (char *)ptr, size);

	while (i < size)
	{
		ud_disassemble(&ud_obj);
		hex = ud_insn_hex(&ud_obj);
		printf("%c%c", hex[0], hex[1]);
		i++;
		if (i < size)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
