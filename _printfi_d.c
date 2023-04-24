#include "main.h"
#include <stdarg.h>

/**
 * _printfi_d - A function that produces output according to a format.
 * @format: a character string.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int num, negative, i, count = 0;
	char buf[32];

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				num = va_arg(args, int);
				negative = 0;
				i = 0;
				if (num == 0)
				{
					count += _putchar('0');
					break;
				}
				if (num < 0)
				{
					negative = 1;
					num = -num;
				}
				while (num > 0)
				{
					buf[i++] = '0' + (num % 10);
					num /= 10;
				}
				if (negative)
				{
					count += _putchar('-');
				}
				while (--i >= 0)
				{
					count += _putchar(buf[i]);
				}
			}
			else
			{
				count += _putchar('%');
				count += _putchar(*format);
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
