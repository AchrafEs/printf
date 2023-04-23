#include "main.h"
#include <unistd.h>

/**
 * _printstr - writes a string to stdout
 * @str: the string to print
 * @count: a pointer to the count of printed characters
 */
void _printstr(char *str, int *count)
{
	while (*str)
	{
		write(1, str++, 1);
		(*count)++;
	}
}
