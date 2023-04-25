#include "main.h"
#include <unistd.h>

/**
 * print_buffer - A function that Writes the contents of a buffer to stdout.
 * @buffer: Pointer to the buffer
 * @size: Number of bytes to write
 *
 * Return: Nothing.
 */
void print_buffer(char *buffer, size_t size)
{
	write(STDOUT_FILENO, buffer, size);
}
