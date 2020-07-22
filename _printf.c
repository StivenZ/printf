#include "holberton.h"
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
		return (0);

	va_start(current, format);
	i = sum = counter = 0;
	

	while (format && format[i])
	{
		
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'c'
			|| format[i + 1] == 's' || format[i + 1] == 'i'))
		{
			i++;
			switch (format[i])
			{
				case 'c':
					sum = sum + c_funct(va_arg(current, int));
					break;
				case 's':
					sum = sum + s_funct(va_arg(current, char *));
					break;
				case 'd':
					sum = sum + d_funct(va_arg(current, int));
					break;
				case 'i':
					sum = sum + d_funct(va_arg(current, int));
					break;
			}
			i++;
		}
		if (format[i + 1] == '%' && format[i] == '%')
		{
			i++;
		}
		my_putchar(format[i]);
		i++;
		counter++;
	}
	va_end(current);
	return (sum + counter);
}
