#include "holberton.h"
/**
 * _printf - prints according to a format
 * @format: format specifier
 * Return: number of bytes printed
*/
int _printf(const char *format, ...)
{
	va_list init;
	int i, sum, counter;

	va_start(init, format);
	i = sum = counter = 0;

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					sum = sum + c_funct(va_arg(init, int));
					break;
				case 's':
					sum = sum + s_funct(va_arg(init, char *));
					break;
			}
			i++;
		}
		else if (format[i] == '%')
		{
			i++;
		}
		write(1, &format[i], 1);
		i++;
		counter++;
	}
	va_end(init);
	return (sum + counter);
}
