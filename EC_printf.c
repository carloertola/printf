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
	int i = 0;

	va_start(args, format);
	while (format[i++])
	{
		if (format[i] != '\\' && format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			if (format[i] == '%' && format[i - 1] != '\\')
				switch (format[i + 1])
				{
				case 'c':
						_putchar(va_arg(args, int));
						i++;
						break;
				case 's':
						print_string(va_arg(args, char *));
						i++;
						break;
				case 'd':
				case 'i':
						print_num(va_arg(args, int));
						i++;
						break;
				}
			if (format[i] == '\\')
			{
				switch (format[i + 1])
				{
				case 'a':
					_putchar(7);
					i++;
					break;
				case 'b':
					_putchar(8);
					i++;
					break;
				case 't':
					_putchar(9);
					i++;
					break;
				case 'n':
					_putchar(10);
					i++;
					break;
				case 'v':
					_putchar(11);
					i++;
					break;
				case 'f':
					_putchar(12);
					i++;
					break;
				case 'r':
					_putchar(13);
					i++;
					break;
				case '%':
					_putchar('%');
					break;
				default:
					/* _putchar(format[); */
					break;
				}
			}
		}
	}
	return (0);
}
