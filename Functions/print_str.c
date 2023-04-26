#include "main.h"

/**
 * print_str - Printes a string.
 * @str: the string to print.
 * @count: the count.
 *
 * Return: the count of string.
 */
int print_str(char *str, int *count)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(str[i], count);
	}
	return (*count);
}
