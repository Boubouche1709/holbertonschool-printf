#include "main.h"
/**
 * _printf - version of printf
 * @format: format string
 * Return: number of character to print
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, count = 0;
if (!format)
return (-1);
va_start(args, format);
while (format[i])
{
if (format[i] == '%' && format[i + 1])
{
i++;
if (format[i] == 'c')
count += print_char(args);
else if (format[i] == 's')
count += print_string(args);
else if (format[i] == 'd' || format[i] == 'i')
count += print_int(args);
else if (format[i] == '%')
count += print_percent(args);
else
{
count += _putchar('%');
count += _putchar(format[i]);
}
}
else
{
count += _putchar(format[i]);
}
i++;
}
va_end(args);
return (count);
}
