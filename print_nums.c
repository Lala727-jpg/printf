#include "main.h"

/**
 * print_int - prints an int
 * @l: va_arg argument
 * @f: a pointer
 * Return: number of char printed
 */
int print_int(va_list l, flags_t *f)
{
	int n = va_arg(l, int);
	int res = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	print_number(n);
	return (res);
}
