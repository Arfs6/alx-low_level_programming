#include <stdlib.h>
#include "main.h"

#define in 1
#define out 0

/**
 * strtow - convert argument to array of words
 * @str: string to convert
 *
 * Return: Array of words
 * NULL if invalid string or insufficient memory
*/
char **strtow(char *str)
{
	int start, stop, len = 0, num_words = 0, j, i;
	short int word;
	char **tab;

	if (!str || !*str)
		return (NULL);/* invalid string */

	for (len = 0; str[len]; ++len)
		;
	len++; /* null character */

	for (i = 0; i < len; ++i)
	{
		if (i == 0)
		{
			if (str[i] == ' ')
				word = out;
			else
				word = in;
			continue;
		}
		if ((str[i] == ' ' || str[i] == '\0') && word)
		{
			word = out;
			num_words++;
		}
		else if (!(str[i] == ' ' || str[i] == '\0') && !word)
		{
			word = in;
		}
	}

	tab = malloc(sizeof(char *) * (num_words + 1));
	if (!tab)
		return (NULL); /* insufficient memory */

	num_words = 0;
	for (i = 0; i < len; ++i)
	{
		if (i == 0)
		{
			if (str[i] == ' ')
				word = out;
			else
				word = in;
			continue;
		}
		if ((str[i] == ' ' || str[i] == '\0') && word)
		{
			word = out;
			stop = i;
		}
		else if (!(str[i] == ' ' || str[i] == '\0') && !word)
		{
			word = in;
			start = i;
		}
		if (stop)
		{
			*(tab + num_words) = malloc(sizeof(char) * (stop - start + 1));
			for (j = 0; start < stop; ++j, ++start)
			{
				*(*(tab + num_words) + j) = *(str + start);
			}
			*(*(tab + num_words) + j) = '\0';
			start = stop = 0;
			num_words++;
		}
	}
	*(tab + num_words) = NULL;

	return (tab);
}

