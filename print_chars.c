#include "main.h"
#include <stdlib.h>

/**
 * print_c - print a char
 * @ch: char to print
 * Return: return 1 always
 */

int print_c(va_list ch)
{
	char chac = (char)va_arg(ch, int);

	_putchar(chac);
	return (1);
}

/**
 * print_s - prints a string
 * @st: string to be printed
 * Return: number ooff characters that has been printed
 */

int print_s(va_list st)
{
	int counter;
	char *str = va_arg(st, char *);

	if (str == NULL)
		str = "(null)";
	for (counter = 0; str[counter]; counter++)
	{
		_putchar(str[counter]);
	}
	return (counter);
}

/**
 * hex_print - prints a char's ascii value in uppercase hex
 * @c: char to print
 * Return: numbers of characters printed (always 2)
 */

static int hex_print(char c)
{
	int counter;
	char differ = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;

	for (counter = 0; counter < 2; counter++)
	{
		if (d[counter] >= 10)
			_putchar('0' + differ + d[counter]);
		else
			_putchar('0' + d[counter]);
	}
	return (counter);
}

/**
 * print_S - prints a string and nonprintable characters ascii values
 * @S: string to be printed
 * Return: numbers of chars printed
 */

int print_S(va_list S)
{
	unsigned int k;
	int counter = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (k = 0; str[k]; k++)
	{
		if (str[k] < 32 || str[k] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			counter += hex_print(str[k]);
		}
		else
		{
			_putchar(str[k]);
			counter++;
		}
	}
	return (counter);
}

/**
 * print_rev - prints a string in reverse
 * @p: string too be printed in reverse
 * Return: number of characters printed
 */

int print_rev(va_list p)
{
	char *str;
	int k, counter = 0;

	str = va_arg(p, char *);

	if (str == NULL)
		str = ")llun(";
	for (k = 0; str[k]; k++)
		;
	for (k -= 1; k >= 0; k--)
	{
		_putchar(str[i]);
		counter++;
	}
	return (counter);
}
