#include "main.h"
#include <stdarg.h>

/**
 * _printf - A function that produces output according to a format.
 * @format: the character string.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;

	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(ap, int), &count);
					break;
				case 's':
					print_str(va_arg(ap, char *), &count);
					break;
				case 'C':
					print_wchar(va_arg(ap, wchar_t), &count);
					break;
				case 'S':
					print_wstr(va_arg(ap, wchar_t *), &count);
					break;
				default:
					_putchar('%', &count);
					if (*format)
						_putchar(*format, &count);
					break;
			}
		}
		else
		{
			_putchar(*format, &count);
		}
		format++;
	}
	va_end(ap);
	return (count);
}
