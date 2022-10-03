#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string (success)
 * NULL if str = null
 * NULL if unsuccessful
*/
char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (!str || !str[0])
		return (0);

	for (len = 0; str[len]; ++len)
	;
	len++;
	dup = malloc(sizeof(char) * len);
	if (!dup)
		return (0);

	/* duplicate str! */
	for (i = 0; i < len; ++i)
		dup[i] = str[i];

	return (dup);
	}
