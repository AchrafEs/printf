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
	int count = 0;
	size_t len;
	char *str;

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
					str = va_arg(args, char *);
					len = 0;
					while (str[len])
					{
						len++;
					}
					count += _write_str(str, len);
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
