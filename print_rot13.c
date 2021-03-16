#include "holberton.h"

/**
 * print_rot13 - converts string to rot13 and prints it
 *
 * @c: character string pointer
 * Return: number of characters printed
 */
int print_rot13(char *c)
{
	int i, j, chars_printed = 0;
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alphabet[j] == c[i])
			{
				/**(c + i) = *(rot_13 + j);*/
				chars_printed += _putchar(rot_13[j]);
				break;
			}
		}
	}
	/*chars_printed += print_string(c);*/
	return (chars_printed);
}
