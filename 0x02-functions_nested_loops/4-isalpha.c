#include "main.h"

/**
 * _isalpha - checks whether the passed character is an alphabet
 * @c: The character to check
 *
 * Return: 1 if c is an alphabet, 
 * else Return 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
