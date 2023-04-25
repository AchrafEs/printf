#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* THE FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/*
 * struct fmt - struct
 * @fmt: format.
 * @fn: function associated.
 */

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/*
 * type def stuct fmt fmt_t
 * @fmt: format.
 * @fmt_t: function associated.
 */

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i, va_list list, char buffer[], int flags, int width, int percision, int size);

/*********************functions***********************/

int print_char(va_list types, char buffer[], int flags, int width, int percision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int percision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int percision, int size);


int print_int(va_list types, char buffer[], int flags, int width, int percision, int size);
int print_binary(va_list types, char buffer[], int flags, int width, int percision, int size);
int print_unsigned(va_list types, char buffer[], int flags, int width, int percision, int size);
int print_octal(va_list types, char buffer[], int flags, int width, int percision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int percision, int size);
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int percision, int size);

int print_hexa(va_list types, char map_to[], char buffer[], int flags, char flag_ch, int width, int percision, int size);

int print_non_printable(va_list types, char buffer[], int flags, int width, int percision, int size);

int print_pointer(va_list types, char buffer[], int flags, int width, int percision, int size);

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_percision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

int print_reverse(va_list types, char buffer[], int flags, int width, int percision, int size);

int print_rot13string(va_list types, char buffer[], int flags, int width, int percision, int size);

int handle_write_char(char c, char buffer[], int flags, int width, int percision, int size);
int write_number(int is_positive, int ind, char buffer[], int flags, int width, int percision, int size);
int write_num(int ind, char buffer[], int flags, int width, int percision, int lenght, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int lenght, int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind, char buffer[], int flags, int width, int percision, int size);


int is_printable(char);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_ungnd(unsigned long int num, int size);

#endif
