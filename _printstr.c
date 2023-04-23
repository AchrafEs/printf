#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printstr - writes a string to stdout
 * @args: A va_list containing the string to print
 *
 * Return: The number of characters printed
 */
int _printstr(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	while (*str)
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}
