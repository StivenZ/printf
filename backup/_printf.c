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
					if (pPrintStr)
						charCount += print_str(pPrintStr);
					else
					{
						charCount += print_str("(null)");
						charCount -= 1;
					}
					break;
				case 'c':
					_putchar(va_arg(Start, int));
					charCount += 1;
					break;
				case 'd':
					charCount += print_Int(va_arg(Start, int));
					break;
				case 'i':
                                        charCount += print_Int(va_arg(Start, int));
                                        break;
				case '%':
					_putchar('%');
					charCount += 1;
					break;
				case '\0':
					break;
			}
			format++;
		}
		_putchar(*format);
		format++;
		charCount++;
	}

	va_end(Start);
	return (charCount);
}
