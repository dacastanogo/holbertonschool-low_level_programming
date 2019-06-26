#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting at 0.
 *
 * Returns - void
 */
void times_table(void)
{
int a, b, mult;

for (a = 0; a <= 9; a++)
{
_putchar('0');

for (b = 1; b <= 9; b++)
{
_putchar(',');
_putchar(' ');
mult = a * b;

if (mult <= 9)
_putchar(' ');
else
_putchar((mult / 10) + '0');
_putchar((mult % 10) + '0');
}
_putchar('\n');
}
}
