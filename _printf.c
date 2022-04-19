#include "main.h"

/**
 * _printf - main function to print.
 * @format: array to print and chect type
 * Return: count of char.
 */
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i;
		va_list ar_list;
		int(*o)(va_list);

		va_start(ar_list, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		count = 0;
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')

