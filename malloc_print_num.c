#include "holberton.h"

/**
 * print_num - prints a number
 *
 * @num: number to be printed
 * Return: nothing
 */
void print_num(int num)
{
	int *arr, n, digits = 0, i;

	if (num < 0)
	{
		_putchar('-');
		n = -num;
	}
	else
	{
		n = num;
	}
	if (n < 10)
		_putchar('0' + n);
	else
	{
		while (num)
		{
			num /= 10;
			digits++;
		}
		arr = malloc(sizeof(int) * digits);
		i = digits - 1;
		while (digits--)
		{
			arr[digits - 1] = n % 10;
			n /= 10;
		}
		while (digits < i)
		{
			_putchar('0' + arr[digits]);
			digits++;
		}
		free(arr);
	}
}
