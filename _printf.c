#include "main.h"
#include <stdarg.h>

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
			switch (*format)
			{
				case 'c':
					c = (char)va_arg(args, int);
					_printchar(c, &count);
					break;
				case 's':
					str = va_arg(args, char *);
					_printstr(str, &count);
					break;
				case '%':
					_printchar('%', &count);
					break;
				default:
					_printchar('%', &count);
					_printchar(*format, &count);
					break;
			}
		}
		else
		{
			_printchar(*format, &count);
		}
		format++;
	}
	va_end(args);
	return (count);
}
