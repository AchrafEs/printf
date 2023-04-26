#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _write_str - A function that writes a string to stdout.
 * @str: the string to print.
 * @len: the size of the string.
 *
 * Return: Void.
 */
void _write_str(const char *str, size_t len)
{
	fwrite(str, sizeof(char), len, stdout);
}
