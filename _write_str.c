#include "main.h"

/**
 * _write_str - A function writes a string to stdout.
 * @str: the string to write.
 * @len: the length of the string.
 *
 * Return: the number of characters printed.
 */
int _write_str(char *str, size_t len)
{
	size_t i;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len);
}
