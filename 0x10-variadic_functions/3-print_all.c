#include "variadic_functions.h"

/**
 * _char - print char
 * @arg: argumentos
 *
 * Return: none
 */

void _char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * _integer - prints integer
 * @arg: argumentos
 *
 * Return: none
 */

void _integer(va_list arg)
{
	printf("%i", va_arg(arg, int));
}

/**
 * _float - prints float
 * @arg: argumentos
 *
 * Return: none
 */

void _float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * _string - prints string
 * @arg: argumentos
 *
 * Return: none
 */

void _string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments.
 *
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	for_ f[] = {
		{"c", _char},
		{"i", _integer},
		{"f", _float},
		{"s", _string},
	};
	int i = 0, j = 0;
	char *sep = "";

	va_start(arg, format);

	while (format && format[i])
	{
		while (j < 4)
		{
			if (*f[j].type == format[i])
			{
				printf("%s", sep);
				f[j].f(arg);
				sep = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(arg);
}
