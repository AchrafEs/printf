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
	while (*format != '\0')
	{
		if (*format[i] == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args1, int);
					write(1, &c, 1);
					count++;
					break;
				case 's':
					*str = va_arg(args1, const char *);
					while (*str != '\0')
					{
						write(1, str, 1);
						str++;
						count++;
					}
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
			}
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
