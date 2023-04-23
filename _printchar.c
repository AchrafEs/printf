#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printchar - writes a character to stdout
 * @args: A va_list containing the character to print
 *
 * Return: The number of characters printed
 */
int _printchar(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}
