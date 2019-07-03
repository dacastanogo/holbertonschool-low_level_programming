#include "holberton.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;

while (*str != '\0')
{
i++;
str++;
}

if ((i % 2) == 0)
str -= (i / 2);
else
str -= ((i - 1) / 2);

while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
