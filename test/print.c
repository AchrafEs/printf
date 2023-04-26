#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...) 
{
	va_list args;
  	int num_chars_printed = 0;
	char c;
	char *str;

	va_start(args, format);
  	while (*format) {
    	if (*format == '%') {
      		format++;
      		if (*format == '%') {
        	_putchar('%');
        	num_chars_printed++;
      	} else {
        	switch (*format) {
          	case 'c': {
            	c = va_arg(args, int);
            	_putchar(c);
            	num_chars_printed++;
            	break;
          }
          	case 's': {
            	str = va_arg(args, char*);
            	while (*str) {
              	_putchar(*str);
              	str++;
              	num_chars_printed++;
            	}
            	break;
          	}
          	default:
            	_putchar('%');
            	_putchar(*format);
            	num_chars_printed += 2;
            	break;
        }
      }
    } else {
      _putchar(*format);
      num_chars_printed++;
    }
    format++;
  }
  va_end(args);
  return num_chars_printed;
}
