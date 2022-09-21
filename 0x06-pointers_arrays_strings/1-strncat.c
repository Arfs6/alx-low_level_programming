#include <stdio.h>
#include "main.h"

/**
 * _strcat - concactenate two strings
 * @src: String to concactinate
 * @dest: concactenate here
 * @n: number of char to concactinate to to dest
 *
 * Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int len, i, j;

	n = n / sizeof(char);/* make sure 1 n = 1 char */
	len = 0;
	for (i = 0; dest[i]; i++)
	len++;
	for (j = 0; j < n; j++, len++)
	dest[len] = src[j];
	if (n >= i)
	dest[len] = '\0';
	return (dest);
}
