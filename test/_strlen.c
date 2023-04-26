#include "main.h"
#include <string.h>

/**
 * _strlen - a function that calculates the length of a string.
 * @s: the string to calculate the length of.
 *
 * Return: the length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
