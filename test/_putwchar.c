#include "main.h"
#include <unistd.h>
#include <errno.h>

/**
 * _putwchar - writes the wide character wc to stdout
 * @wc: The wide character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putwchar(wchar_t wc)
{
	return (write(1, &wc, sizeof(wchar_t)));
}
