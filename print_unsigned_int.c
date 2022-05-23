#include "main.h"

/**
 * print_u - prints an unsigned in in decimal notation
 * @w: unsigned int to print
 *
 * Return: number of digits printed
 */

int print_u(va_list w)
{
    unsigned int a[10];
    unsigned int e, f, g, sum;
    int counter;

    g = va_arg(w, unsigned int);
    f = 1000000000; /* (10 ^ 9) */
    a[0] = g / f;
    for (e = 1; e < 10; e++)
    {
        f /= 10;
        a[e] = (g / f) % 10;
    }
    for (e = 0, sum = 0, counter = 0; e < 10; e++)
    {
        sum += a[e];
        if (sum || e == 9)
        {
            _putchar('0' + a[e]);
            counter++;
        }
    }
    return (counter);
}

/**
 * print_o - takes an unsigned int and prints it in octal notation
 * @o: unsigned int to print
 *
 * Return: number of digits printed
 */

int print_o(va_list o)
{
    unsigned int a[11];
    unsigned int i, m, n, sum;
    int counter;

    n = va_arg(o, unsigned int);
    m = 1073741824; /* (8 ^ 10) */
    a[0] = n / m;
    for (i = 1; i < 11; i++)
    {
        m /= 8;
        a[i] = (n / m) % 8;
    }
    for (i = 0, sum = 0, counter = 0; i < 11; i++)
    {
        sum += a[i];
        if (sum || i == 10)
        {
            _putchar('0' + a[i]);
            counter++;
        }
    }
    return (counter);
}

/**
 * print_b - takes an unsigned int and prints it in binary notation
 * @b: unsigned in to print
 *
 * Return: number of digits printed
 */

int print_b(va_list b)
{
    unsigned int x, y, z, sum;
    unsigned int a[32];
    int counter;

    x = va_arg(b, unsigned int);
    y = 2147483648; /* (2 ^ 31) */
    a[0] = x / y;
    for (z = 1; z < 32; z++)
    {
        y /= 2;
        a[z] = (x / y) % 2;
    }
    for (z = 0, sum = 0, counter = 0; z < 32; z++)
    {
        sum += a[z];
        if (sum || z == 31)
        {
            _putchar('0' + a[z]);
            counter++;
        }
    }
    return (counter);
}