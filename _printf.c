#include "holberton.h"
/**
 * chofunct - chooses which function applies according to the case
 * @c: character to compare with
 * @current: va_list argument
 * Return: number of characters printed.
*/
int chofunct(char c, va_list current)
{
	switch (c)
	{
		case 'c':
			return (c_funct(va_arg(current, int)));
		case 's':
			return (s_funct(va_arg(current, char *)));
		case 'd':
			return (d_funct(va_arg(current, int)));
		case 'i':
			return (d_funct(va_arg(current, int)));
	}
	return (0);
}
/**
 * _printf - prints according to a format
 * @format: format specifier
 * Return: number of bytes printed
*/
int _printf(const char *format, ...)
{
	va_list current;
	int i, sum, counter;

	if (format == NULL || format == '\0')
		return (-1);

	va_start(current, format);
	i = sum = counter = 0;

	while (format[i] != '\0')
	{
		while (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'c'
			|| format[i + 1] == 's' || format[i + 1] == 'i'))
		{
			i++;
			sum = sum + chofunct(format[i], current);
			i++;
		}

		if (format[i + 1] == '%' && format[i] == '%')
			i++;

		if (format[i] != '\0')
		{
			my_putchar(format[i]);
			i++;
			counter++;
		}
	}
	va_end(current);
	return (sum + counter);
}
