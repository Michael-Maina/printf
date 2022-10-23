#include "main.h"

/**
 * print_hxdc - prints hexadecimal conversion of integer
 * @a: unsigned integer
 * @c: selector for uppercase or lowercase scenario
 * Return: length of hexadecimal number printed
 */

int print_hxdc(unsigned int a, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m, sum;
	char diff;
	int count;

	m = 268435456; /* (16 ^ 7) */
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_hex - prints unsigned int in lowercase hex notation
 * @args: unsigned int to print
 * Return: number of digits printed
 */

int print_hex(va_list args)
{
	return (print_hxdc(va_arg(args, unsigned int), 0));
}

/**
 * print_HEX - prints an unsigned int in uppercase hex notation
 * @args: unsigned int to print
 * Return: number of digits printed
 */

int print_HEX(va_list args)
{
	return (print_hxdc(va_arg(args, unsigned int), 1));
}
