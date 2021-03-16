#include "holberton.h"

/**
 * print_reverse - prints a string in reverse order, followed by a new line.
 * @s: string to be printed in reverse order
 * Return: number of characters printed
 */
int print_reverse(char *s)
{
	int x, y, chars_printed = 0;

	x = 0;
	y = 0;
	if (s)
	{
		while (*(s + x))
			x++;
		for (y = (x - 1); y >= 0; y--)
		{
			chars_printed += _putchar(*(s + y));
		}
		return (chars_printed);
	}
	return (0);
}
