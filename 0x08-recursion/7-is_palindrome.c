#include "holberton.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: string
 *
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
	int r, c;

	if (*s)
	{
		c = 1;
		r = _strlen_recursion(s + 1);
		r += c;
	}
	else
		r = 0;

	return (r);
}

/**
 * compare - compare the positions of the array
 * @l: legnth of s
 * @s: a string
 * @c: counter
 *
 * Return: 1 if match if'nt 0
 */

int compare(int l, char *s, int c)
{
	int r = 1, d;

	d = l / 2;

	if (*(s + c) == *(s + ((l - 1) - c)) && c < d)
		r = compare(l, s, c + 1);
	else if ((*(s + c) != *(s + ((l - 1) - c)) && c < d))
		r = 0;

	return (r);
}

/**
 * is_palindrome - determinate if a string is palindrome
 * @s: string
 *
 * Return: 1 if is a palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int l, r, c = 0;

	l = _strlen_recursion(s);
	r = compare(l, s, c);

	return (r);
}
