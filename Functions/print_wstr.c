#include "main.h"
#include <wchar.h>
#include <stdlib.h>

/**
 * print_wstr - A function that prints wide strings.
 * @ws: the wide string.
 * @count: the count.
 *
 * Return: the wide string.
 */
int print_wstr(wchar_t *ws, int *count)
{
	char buf[BUF_SIZE];
	int i, len;

	while (*ws)
	{
		len = wctomb(&buf[i], *ws++);
		if (len <= 0)
		{
			break;
		}
		i += len;
		if (i >= BUF_SIZE - 1)
		{
			buf[i] = '\0';
			print_str(buf, count);
			i = 0;
		}
	}
	if (i > 0)
	{
		buf[i] = '\0';
		print_str(buf, count);
	}
	return (*count);
}
