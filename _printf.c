#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: the type of arguments passed
 *
 * Return: Always 0 (success). Error -1.
 */
int _printf(const char *format, ...)
{
	va_list args;
	char *str;
	int count = 0;
	char c;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		}
		if (*format == '\0')
		{
			break;
		}
		if (*format == 'c')
		{
			c = va_arg(args, int);
			write(1, &c, 1);
			count++;
		}
		else if (*format == 's')
		{
			str = va_arg(args, char *);
			while (*str)
			{
				write(1, str++, 1);
				count++;
			}
		}
		else if (*format == '%')
		{
			write(1, "%", 1);
			count++;
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
