#include "holberton.h"

/**
 * _printf - Function that prints formatted output.
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
		if (format[i] != '%')
		{
			chars_printed += _putchar(format[i]);
		}
		else if (format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				chars_printed += _putchar(va_arg(args, int));
			else if (format[i] == 's')
				chars_printed += print_string(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				chars_printed += print_num(va_arg(args, int));
		}
		i++;
	}
	return (chars_printed);
}
