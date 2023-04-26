#include "main.h"
#include <stdarg.h>

/**
 * _printf - A Custom implementation of printf.
 * @format: the String containing the format specifier and data.
 * @...: Variable arguments list.
 *
 * Return: Number of bytes written.
 */
int _printf(const char *format, ...)
{
	char buffer[BUFF_SIZE];
	int printed_chars = 0, buffer_size = 0;
	va_list args;
	int ret;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ret = handle_conversion(&format, &args, buffer, &buffer_size);
			if (ret == -1)
				return (-1);
			printed_chars += ret;
		}
		else
		{
			buffer[buffer_size] = *format;
			buffer_size++;
			printed_chars++;
		}
		if (buffer_size == BUFF_SIZE)
		{
			print_buffer(buffer, buffer_size);
			buffer_size = 0;
		}
		format++;
	}
	va_end(args);
	if (buffer_size > 0)
	{
		print_buffer(buffer, buffer_size);
	}
	return (printed_chars);
}
