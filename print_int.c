#include "holberton.h"

/**
* printNumber - puts numbers in array to print them
* @n: number to be stored in the array
*/

int print_Int(int i)
{
	int count = 0, j = 0;
	int k, l;
	int a[10];

	l = i;
	if (i == 0)
	{
		_putchar(0 + '0');
		count++;
		return (count);
	}
	while (i > 0 || i < 0)
	{
		if (i < 0)
		i *= -1;
		a[j] = i % 10;
		k = (i / 10);
		i = k;
		j++;
	}
	if (l < 0)
	{
		_putchar(45);
		count++;
	}
	j = j - 1;
	while (j >= 0)
	{
		_putchar(a[j] + '0');
		j--;
		count++;
	}
	return (count);
}
