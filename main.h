#ifndef FILE_MAIN
#define FILE_MAIN

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags.
 * @plus: flag for the '+' char
 * @space: flag for the space char
 * @hash: flag fir the '#' char
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - strust to choose right task based.
 * @c: format specifier
 * @f: format to the correct printing function.
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;
/* print nums */
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

/* print bases */
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);
/* printf */
int _printf(const char *format, ...);
/* get print */
int (*get_print(char s))(va_list, flags_t *);
/* get_flags */
int get_flag(char s, flags_t *f);
/* print alpha */
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
/* write funcs */
int _putchar(char c);
int _puts(char *str);
/* print_custom */
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int bigS(va_list l, flags_t *f);

/* print_address */
int print_address(va_list l, flags_t *f);
/* print_percent */
int print_percent(va_list l, flags_t *f);

#endif
