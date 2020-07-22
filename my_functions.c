#include "holberton.h"
/**
 * s_funct - prints string
 * @s: pointer to the string
 * Return: number of characters
*/
int s_funct(char *s)
{
	int i;

	if (!s)
		return (0);
	i = 0;

	while (s[i])
	{
		my_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * c_funct - prints a character
 * @c: character
 * Return: 1
*/
int c_funct(char c)
{
	if (!c)
		return (0);

	my_putchar(c);
	return (1);
}

/**
 * d_funct - prints integer
 * @n: number pass to be printed
 * Return: number of characters printed
*/
int d_funct(int n)
{
	int i, max;

	i = 0;
	max = 10;

	if (n < 0)
	{
		n = -n;
		my_putchar('-');
	}

	while ((n / max) >= 1)
	{
		i++;
		max = max * 10;
	}
	max = max / 10;

	while (max > 0)
	{
		my_putchar(((n / max) % 10) + '0');
		max = max / 10;
	}

	return (i);
}
