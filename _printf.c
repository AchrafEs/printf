#include "main.h"

/**
 * _printf - function printf
 *
 * @format: function that produces output according to a format.
 *
 * Return: chars that are printed.
 */

int _printf(cont char *format, ...)
{
	int i;
	int printed = 0;
	int printed_chars = 0;
	int flags;
	int width;
	int percision;
	int size;
	int buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; formt && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			percision = get_percision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer, flags, width, percision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/*
 * print_buffer - if there is any contents of the buffer print it.
 * @buffer: chars's array
 * @buff_ind: add next char to index, represent lenght
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}
