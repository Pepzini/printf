#include <unistd.h>
#include "main.h"

/**
 * _putchar - wites the character c to stdout
 * @c: The character to be printed
 *
 * Return: On success returns 1 otherwise return -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
