#include "main.h"
#include <wchar.h>
#include <stdlib.h>

/**
 * print_wchar - A fuction that prints a wide char.
 * @wc: the wide character.
 * @count: the count.
 *
 * Return: the wc printed.
 */
int print_wchar(wchar_t wc, int *count)
{
	char buf[BUF_SIZE];
	int i, len;

	len = wctomb(buf, wc);
	if (len <= 0)
	{
		return (*count);
	}
	for (i = 0; i < len; i++)
	{
		_putchar(buf[i], count);
	}
	return (*count);
}
