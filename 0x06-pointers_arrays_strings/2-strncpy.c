#include "main.h"

/**
 * _strncpy - copy n number of char in src to dest
 * @dest: Destination string
 * @src: the string to be copied
 * @n: number of char to copy
 *
 * Return: dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, len;

	len = 0;
	for (i = 0; dest[i]; i++)
	len++;
	j = 0;
	while (j < n)
	{
		if (!(src[j]))
		dest[j] = '\0';
		else
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
