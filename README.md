# Introduction

This repository contains custom implementations of the C printf function.

It's kindly contributed by Eugene Muthui from Nairobi, Kenya and Carlo Ertola
from Addis Ababa, Ethiopia.

## holberton.h
This file contains the function prototypes, macros and standard libraries that
have been defined and used in this repository.

## _putchar.c
This file contains the _putchar function that prints a character to standard
output. It takes a character argument and returns an integer.

## EC_printf.c
Contains the _printf function and is called to perform operations that allow
the user to print formatted output. The format string specifies the format in
which to print the arguments passed to the printf function since it is a
variadic function. The format specifiers allowed include:
1. c - print a character
2. s - print an array of characters
3. i and d - print an integer
4. b - print an unsigned integer in binary format
5. u - print an unsigned integer
6. o - print an integer in octal format (base 8)
7. x and X - print an integer in hexadecimal format (base 16). If 'x' is passed
   use lowercase letters, else use uppercase letters.
8. S - custom string specifier that prints the ACSII codes of any non-printable
   characters passed i.e (0 < ASCII value < 32 or >= 127)
9. p - prints a pointer value
10. r - prints the passed string in reverse order
11. R - prints the Rot13-encrypted version of the passed string
12. % - prints the modulus sign

## print_num.c
Function to print a number as one or more characters

## print_string.c
Function to print a string character by character

## print_reverse
Function to reverse string and print it

## print_rot13
Converts string to rot13 and prints it

## print_binary
Converts an unsigned int to binary and prints it

## print_pointer
Prints address of pointer

## print_odh
Handles octal, decimal and hexadecimal conversions

## print_unknown_spec
Handles unknown format specifiers

## print_S
prints custom formatted string

## man(3)printf
documents this custom printf function
