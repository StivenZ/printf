#include "holberton.h"
/**
 * my_putchar - prints one character at a time
 * @c: input
 * Return: 1 when printed, 0 when nothing printed.
*/
int my_putchar(char c)
{
	return (write(1, &c, 1));
}
