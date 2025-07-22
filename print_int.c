#include "main.h"

/**
 * print_int - print an int
 * @args: list of argument
 * Return: number to print
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
int count = 0;
unsigned int num;
if (n < 0)
{
count += _putchar('-');
num = -n;
}
else
num = n;
if (num / 10)
count += print_number(num / 10);
count += _putchar((num % 10) + '0');
return (count);
}

/**
 * print_number - recursive function to print a number
 * @num: number to print
 * Return: list of number
 */
int print_number(unsigned int num)
{
int count = 0;
if (num / 10)
count += print_number(num / 10);
count += _putchar((num % 10) + '0');
return (count);
}
