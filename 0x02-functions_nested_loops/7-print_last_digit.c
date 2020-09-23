#include "holberton.h"

/**
 * print_last_digit - print the last digit of the input
 * @n: input number
 * 
 * Return: the last digit of the input
 */

int print_last_digit(int n)
{
	n = abs(n);
	n = (n % 10);
	_putchar(n + '0');

	return (n);
}
