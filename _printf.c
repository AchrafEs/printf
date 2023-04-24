#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format: a character string
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int ch, count = 0;
	char *str;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				ch = va_arg(args, int);
				_putchar(ch);
				count++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char*);
				while (*str != '\0')
				{
					_putchar(*str);
					str++;
					count++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
