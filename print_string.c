#include "main.h"

/**
 * print_string - Affiche une chaîne de caractères
 * @args: Liste d'arguments variadiques
 *
 * Return: Nombre de caractères imprimés
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
