#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>

#define BUF_SIZE 1024

int _printf(const char *format, ...);
int _putchar(int c, int *count);
int print_str(char *str, int *count);
int print_wchar(wchar_t wc, int *count);
int print_wstr(wchar_t *ws, int *count);

#endif
