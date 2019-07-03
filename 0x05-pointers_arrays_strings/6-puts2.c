#include "holberton.h"
/**
 * puts2 - function that prints one char out of 2 of a string,
 * followed by a new line.
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
int i = 1;

while (*str != '\0')
{
if ((i % 2) != 0)
{
_putchar(*str);
}
str++;
i++;
}
_putchar('\n');
}
