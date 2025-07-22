#include "main.h"

/**
* print_char - print a character
* @args: list of arguments
* Return: character to print
*/

int print_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}
