#include "main.h"

/**
 * print_int - prints an integer
 * @args: list of arguments pointing to integer
 *
 * Return: length of integer
 */

int print_int(va_list args)
{
	int a, i, j;
	int size = 0;
	int count = 1;

	a = va_arg(args, int);

	if (a < 0)
	{
		_putchar('-');
		i = a * -1;
		size++;
	}
	else
		i = a;

	j = i;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar(((i / count) % 10) + '0');
		size++;
	}
	return (size);
}
