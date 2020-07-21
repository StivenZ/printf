#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _printf - Prints practically anything
* @format: string of printf
* Return: int
*/
int _printf(const char *format, ...)
{
	int charCount = 0;
	char *pPrintStr;
	va_list Start;

	va_start(Start, *format);

	while (*format)
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
					break;
				case 'i':
					break;
				case '%':
					break;
				case '\0':
					break;
			}
		}
	}

	va_end(Start);
	return (charCount);
}
