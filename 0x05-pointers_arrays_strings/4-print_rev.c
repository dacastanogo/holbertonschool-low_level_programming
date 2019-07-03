#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: pointer to a string
 */
void print_rev(char *s)
{
int x;

for (x = 0; s[x];)
x++;
for (; x; x--)
_putchar(s[x - 1]);

_putchar('\n');
}
