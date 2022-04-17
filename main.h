#ifndef FILE_MAIN
#define FILE_MAIN

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* utili.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *format, ...);

/* handlers.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/**
 * printer
 * @va_list: variadic function.
 * print_string - prints string to stdout
 * Return: the string to stdouts
 */
int print_string(va_list);
int print_char(va_list);
int print_binary(va_list);
int print_integer(va_list);
int rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

/**
 * _putchar.c
 * @char: char to be printed.
 * _putchar - putchar function.
 * Return: the return value of putchar.c
 */
int _putchar(char);
int buffer(char);

/**
 * struct _format - typedef of struct _format.
 * @type: Format.
 * @f: a pointer to the function associated..
 */
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
