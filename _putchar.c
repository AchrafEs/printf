#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @count: the count.
 *
 * Return: the printed character.
 */
int _putchar(int c, int *count)
{
	putchar(c);
	(*count)++;
	return (*count);
}
