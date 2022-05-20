#include main.h
#include <stdarg.h>

init _printf(const char *fmt, ...)
{
    va_list ap;

    init i = 0;

    va_start(ap, fmt);

    while (fmt[i] != '\0')
    {
        if (fmt[i] == '%')
        {
            i++;
            switch (fmt[i])
            {
            case 'c':
                _putchar(va_arg(ap, int));
                break;
            case 's':
                _puts(va_arg(ap, char *));
                break;
            case 'd':
                _putnbr(va_arg(ap, int));
                break;
            case 'i':
                _putnbr(va_arg(ap, int));
                break;
            case 'u':
                _putnbr(va_arg(ap, unsigned int));
                break;
            case 'o':
                _putnbr_base(va_arg(ap, unsigned int), 8);
                break;
            case 'x':
                _putnbr_base(va_arg(ap, unsigned int), 16);
                break;
            case 'X':
                _putnbr_base(va_arg(ap, unsigned int), 16);
                break;
            case 'b':
                _putnbr_base(va_arg(ap, unsigned int), 2);
                break;
            case 'S':
                _puts(va_arg(ap, char *));
                break;
            case 'p':
                _putnbr_base(va_arg(ap, unsigned int), 16);
                break;
            case '%':
                _putchar('%');
                break;
            default:
                _putchar('%');
                _putchar(fmt[i]);
                break;
            }
        }
        else
        {
            _putchar(fmt[i]);
        }
        i++;
    }

    va_end(ap);

    return (n_displayed);
}