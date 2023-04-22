#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: the type of arguments passed
 *
 * Return: Always 0 (success). Error -1.
 */
int _printf(const char *format, ...)
{
	va_list args1, args2;
	char *str;
	int i, c, num_chars = 0;
	const char *str;
	size_t len;

	va_start(args1, format);
	va_copy(args2, args1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c = va_arg(args1, int);
					putchar(c);
					num_chars++;
					break;
				case 's':
					*str = va_arg(args1, const char *);
					while (*str != '\0')
					{
						putchar(*str);
						str++;
						num_chars++;
					}
					break;
				case '%':
					c = '%';
					putchar('%');
					num_chars++;
					break;
				default:
					putchar('%');
					num_chars += 2;
					break;
			}
		}
		else
		{
			putchar(format[i]);
			num_chars++;
		}
	}
	va_end(args1);
	va_end(args2);
	return (num_chars);
}
