#include <stdlib.h>



/**

 * check_for_specifiers - checks if there is a valid format specifier

 * @format: possible format specifier

 *

 * Return: pointer to valid function or NULL

 */

static int (*check_for_specifiers(const char *format))(va_list)

{

	unsigned int i;

	print_t p[] = {

		{"c", print_c},

		{"s", print_s},

		{"i", print_i},

		{"d", print_d},

		{"u", print_u},

		{"b", print_b},

		{"o", print_o},

		{"x", print_x},

		{"X", print_X},

		{"p", print_p},

		{"S", print_S},

		{"r", print_r},

		{"R", print_R},

		{NULL, NULL}

	};



	for (i = 0; p[i].t != NULL; i++)

	{

		if (*(p[i].t) == *format)

		{

			break;

		}

	}

	return (p[I].z);

}



/**

 * _printf - function that produces output according to format

 * @format: list of argument types passed to the function

 *

 * Return: number of characters to be printed

 */

int _printf(const char *format, ...)

{

	unsigned int k = 0, num_display = 0;

	va_list argz;

	int (*z)(va_list);



	if (format == NULL)

		return (-1);

	va_start(argz, format);

	while (format[k])

	{

		for (; format[k] != '%' && format[k]; k++)

		{

			_putchar(format[k]);

			num_display++;

		}

		if (!format[k])

			return (num_display);

		z = check_for_specifiers(&format[k + 1]);

		if (z != NULL)

		{

			num_display += z(argz);

			k += 2;

			continue;

		}

		if (!format[k + 1])

			return (-1);

		_putchar(format[k]);

		num_display++;

		if (format[k + 1] == '%')

			k += 2;

		else

			k++;

	}

	va_end(argz);

	return (num_display);

}
