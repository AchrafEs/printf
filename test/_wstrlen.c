#include "main.h"
#include <string.h>

/**
 * _wstrlen - a function that calculates the length of a wide string.
 * @ws: the wide string to calculate the length of.
 *
 * Return: the length of the wide string.
 */
size_t _wstrlen(const wchar_t *ws)
{
	size_t len = 0;

	while (ws[len] != L'\0')
	{
		len++;
	}
	return (len);
}
