#include "main.h"

/**
 * print_int - prints an integer
 * @args: list of arguments pointing to integer
 *
 * Return: length of integer
 */

int print_int(va_list args)
{
	int a;
	int i, j, k;
	k = 1;
	int count = 1;

	a = va_arg(args, int);

	if (a < 0)
	{
		_putchar('-');
		i = n * -1;
		k++;
	}
	else
		i = n;

	j = i;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar(((i / count)% 10) + '0');
		k++;
	}
	return (k);
}
