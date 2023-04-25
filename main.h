#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
void print_buffer(char *buffer, size_t size);
int handle_conversion(const char **format, va_list *args, char *buffer, int *buffer_size);

#endif
