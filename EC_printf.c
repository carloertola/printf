#include "holberton.h"

/**
 * escape_handler - Function that produces output according to a format.
 *
 * @spec: format specifier
 *
 * Return: num of printed chars if successful and 0 if error
 */
int modulus_handler(va_list *args)
{
	int chars_printed = 0;

	switch (format[i + 1])
	{
		case 'c':
			_putchar(va_arg(args, int));
			chars_printed++;
			return (chars_printed);
		case 's':
			chars_printed = print_string(va_arg(args, char *));
			return (chars_printed);
		case 'd':
		case 'i':
			chars_printed = print_num(va_arg(args, int));
			return (chars_printed);
		default:
			return (0);
	}
}
/**
 * escape_handler - handles the cases
 *
 * @spec: format specifier
 *
 * Return: 1 if successful and 0 if error
 */
int escape_handler(char spec)
{
	switch (spec)
	{
		case 'a':
			_putchar(7);
			return (1);
		case 'b':
			_putchar(8);
			return (1);
		case 't':
			_putchar(9);
			return (1);
		case 'n':
			_putchar(10);
			return (1);
		case 'v':
			_putchar(11);
			return (1);
		case 'f':
			_putchar(12);
			return (1);
		case 'r':
			_putchar(13);
			return (1);
		case '%':
			_putchar(37);
			return (1);
		case '\\':
			_putchar(92);
			return (1);
		default:
			return (0);
	}
}
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
	int i = 0, chars_printed = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (modulus_handler(*args))
				return (-1);
		}
		else if (format[i] == '\\')
		{
			if (escape_handler(format[i + 1]))
				return (-1);
				i++;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
		chars_printed++;
	}
	return (chars_printed);
}
