#include "holberton.h"

/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * Return: no return value
 */
void print_string(char *str)
{
	int x = 0;

	while (*(str + x))
	{
		_putchar(*(str + x));
		x++;
	}
}
