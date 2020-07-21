#include "holberton.h"
/**
 * s_funct - prints string
 * @s: pointer to the string
 * Return: number of characters
*/
int s_funct(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		write(1, &s[i], 1);
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
	write(1, &c, 1);
	return (1);
}

/**
 * d_funct - prints integer
 * @n: number pass to be printed
 * Return: number of characters printed
*/
int d_funct(int n)
{
	int i = 0;

	if (n > 0)
	{
		d_funct(n / 10);
		write(1, &n + '0', 4);
	}
	return (i + 1);
}
