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
					write(STDOUT_FILENO, &c, sizeof(c));
					num_chars++;
					break;
				case 's':
					*str = va_arg(args1, const char *);
					len = strlen(str);
					write(STDOUT_FILENO, str, len);
					num_chars += len;
					break;
				case '%':
					c = '%';
					write(STDOUT_FILENO, &c, sizeof(c));
					num_chars++;
					break;
				default:
					c = '%';
					write(STDOUT_FILENO, &c, sizeof(c));
					write(STDOUT_FILENO, &format[i], sizeof(format[i]));
					num_chars += 2;
					break;
			}
		}
		else
		{
			c = format[i];
			write(STDOUT_FILENO, &c, sizeof(c));
			num_chars++;
		}
	}
	va_end(args1);
	va_end(args2);
	return (num_chars);
}
