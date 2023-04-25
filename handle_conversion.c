#include "main.h"
#include <string.h>
#include <stdarg.h>

/**
 * andle_conversion - Processes a conversion specifier in a printf format string.
 * @format: Pointer to the format string
 * @args: Pointer to the variable arguments list
 * @buffer: Pointer to the output buffer
 * @buffer_size: Pointer to the size of the output buffer
 *
 * Return: Number of bytes written to the output buffer, or -1 on failure.
 */
int handle_conversion(const char **format, va_list *args, char *buffer, int *buffer_size)
{
	char *str;
	int len;

	switch (**format)
	{
		case 's':
			str = va_arg(*args, char *);
			if (str == NULL)
				str = "(null)";
			len = strlen(str);
			if (len > BUFF_SIZE - *buffer_size)
			{
				print_buffer(buffer, *buffer_size);
				*buffer_size = 0;
			}
			strncpy(buffer + *buffer_size, str, len);
			*buffer_size += len;
			break;
		case 'c':
			if (*buffer_size >= BUFF_SIZE)
			{
				print_buffer(buffer, *buffer_size);
				*buffer_size = 0;
			}
			buffer[*buffer_size] = va_arg(*args, int);
			*buffer_size += 1;
			break;
		case '%':
			if (*buffer_size >= BUFF_SIZE)
			{
				print_buffer(buffer, *buffer_size);
				*buffer_size = 0;
			}
			buffer[*buffer_size] = '%';
			*buffer_size += 1;
			break;
		default:
			return (-1);
	}
	(*format)++;
	return (*buffer_size);
}
