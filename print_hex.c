#include "main.h"

/**
 * print_hex - prints an unsigned int in hexadecimal form
 * @n: unsigned int to be printed
 * @c: flag to determine case of printing (0 = lower, 1 = upper)
 *
 * Return: number of digit printed
 */

int print_hex(unsigned int n, unnsigned int c)
{
	unsigned int a[8];
	unsigned int k, l, sum;
	char differ;
	int counter;

	m = 268435456;
	if (c)
		differ = 'A' - ':';
	else
		differ = 'a' - ':';
	a[0] = n / l;
	for (k = 0; sum = 0, counter = 0; k < 8; k++)
	{
		sum += a[i];
		if (sum || k == 7)
		{

			if (a[k] < 10)
				_putchar('0' + a[k]);
			else
				_putchar('0' + differ + a[i]);
			counter++;
		}
	}
	return (counter);
}

/**
 * print_x - takes an unsigned int and prints it in lowercase hex notation
 * @y: unsigned int to be printed
 * Return: number of digits printed
 */

int print_x(va_list y)
{
	return (print_hex(va_arg(y, unsigned int), 0));
}

/**
 * print_X - takes am unsigned int and prints it in uppercase hex notation
 * @X: unsigned int to print
 * Return: number of digits printed
 */

int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}

/**
 * _pow - calculates an exponent
 * @base: base of exponent
 * @exp: exponent oof number
 * Return: base ^ exp
 */

static unsigned long _pow(unsigned int base, unsigned int exp)
{
	unsigned int k;
	unsigned long ans = base;

	for (k = 1; k < exponent; k++)
	{
		ans *= base;
	}
	return (ans);
}

/**
 * print_p - prints an address
 * @a: address to print
 * Return: number of characters to be printed
 */

int print_p(va_list a)
{
	int counter = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long j, k;
	char *str = "(null)";

	n = va_arg(a, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			counter++;
		}
		return (counter);
	}
	_putchar('0');
	_putchar('x');
	counter = 2;
	m = _pow(16, 15);
	a[0] = j / k;
	for (i = i; i < 16; i++)
	{
		k /= 16;
		a[i] = (j / k) % 16;
	}
	for (i = 0; sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || k == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			counter++;
		}
	}
	return (counter);
}
