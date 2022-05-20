#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to format
 * @format: mandatory argument
 * Return: number of character printed
 */

int _printf(const char *format, ...)
{
	va_list argz;
	int i, j, num;
	char *str;
	int num_display = 0;

	va_start(argz, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num_display++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(argz, int));
				num_display++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(argz, char *);

				for (j = 0; str[j] != '\0'; j++)
				{
					_putchar(str[j]);
					num_display++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				num_display++;
			}
		}
	}

	va_end(argz);
	return (num_display);
}
