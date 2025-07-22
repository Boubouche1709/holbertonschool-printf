#include "main.h"

/**
 * print_string - print a string
 * @args: list of arguments
 * Return: number of arguments to print
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
if (!str)
str = "(null)";
while (*str)
{
count += _putchar(*str);
str++;
}
return (count);
}
