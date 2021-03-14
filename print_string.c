#include "holberton.h"

/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * Return: no. of characters printed on success, or 0 on failure
 */
int print_string(char *str)
{
	int x = 0, chars_printed = 0;;

	while (*(str + x))
	{
		_putchar(*(str + x));
		chars_printed++;
		x++;
	}

	if (chars_printed > 0)
		return (chars_printed);
	else
		return (0);
}
