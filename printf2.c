#include "holberton.h"

/**
* _printf - Prints practically anything
* @format: string of printf
*/
int _printf(const char *format, ...)
{
	int charCount = 0;
	char *pPrintStr;
	va_list Start;

	va_start(Start, *format);

	while(*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 's':
					pPrintStr = va_arg(Start, char *);
					while (*pPrintStr)
					{
						_putchar(*pPrintStr);
						pPrintStr++;
						charCount++;
					}
					break;
				case 'c':
					_putchar(va_arg(Start, int));
					charCount++;
					break;
				case 'd':
					charCount += print_Int(va_arg(Start, int));
					break;
				case 'i':
                                        charCount += print_Int(va_arg(Start, int));
                                        break;
				case '%':
					_putchar('%');
					_putchar(*format);
					charCount++;
				case '\0':
					break;
				default:
					_putchar('%');
					charCount += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			format++;
			charCount++;
		}
	}

	va_end(Start);
	return (charCount);
}
