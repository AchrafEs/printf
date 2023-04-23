#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * _printf - produces output according to a format.
 * @format: a character string
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += write(1, va_arg(args, char *), strlen(va_arg(args, char *)));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar('%');
					count += _putchar(*format);
					break;
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	va_end(args);
	return (count);
}
