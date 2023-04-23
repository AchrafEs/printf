#include "main.h"
#include <unistd.h>

/**
 * _printchar - writes a character to stdout
 * @c: the character to print
 * @count: a pointer to the count of printed characters
 */
void _printchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}
