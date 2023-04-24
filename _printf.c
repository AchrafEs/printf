#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

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

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int ch = va_arg(args, int);

				putchar(ch);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);

				while (*str != '\0')
				{
					putchar(*str);
					str++;
					count++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
