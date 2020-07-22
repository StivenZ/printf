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
	int i, j, k;
	int *str;

	if (!n)
		return (0);
	j = n;
	i = 0;

	while (j > 0)
	{
		j = j / 10;
		i++;
	}
	j = n;

	str = malloc((sizeof(int)) * i);
	if (!str)
		return (0);

	i--;
	k = i;

	while (j > 0)
	{
		str[i] = (j % 10);
		j = j / 10;

		if (i < 0)
			i--;
	}

	while (i < k)
	{
		my_putchar(str[i] + '0');
		i++;
	}
	free(str);
	return (i + 1);
}
