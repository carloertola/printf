#include "holberton.h"

/**
 * print_number - prints number to screen
 * @n: number to be printed
 * Return: returns number of chars printed
 */
int print_num(int n)
{
	unsigned int x = 0;
	x = n;
	if (n < 0)
	{
		_putchar('-');
		x *= -1;
	}
	if (x / 10)
		print_num(x / 10);
	_putchar('0' + x % 10);
}
