#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
int handle_conversion(const char **format, va_list *args, char *buffer, int *buffer_size);
void print_buffer(char *buffer, size_t size);
int print_str(char *str, int *count);
int print_wchar(wchar_t wc, int *count);
int print_wstr(wchar_t *ws, int *count);
void _write_str(const char* str, size_t len);

#endif
