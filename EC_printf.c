#include "holberton.h"

/**
 * _printf - Function that produces output according to a format.
 *
 * @format: a string composed of zero or more characters to print or use as
 * directives that handle subsequent arguments and special characters.
 *
 * Description: This function can take a variable number and type of arguments
 * that should be printed to standard output.
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	while (format[i++])
	{
		if (format[i] != '\' && format[i] != '%')
			_putchar(format[i]);
		else
			if (format[i] == '%' && format[i - 1] != '\')
				switch (format[i + 1])
				{
					case 'c':
						_putchar(va_arg(args, int);
						break;
					case 's':
						print_string(va_arg(args, char *);
						break;
					case 'd' || 'i':
						print_num(va_arg(args, int);
						break;
				}
	}
}
