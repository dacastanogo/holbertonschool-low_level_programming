#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
unsigned long factor, x;

x = 612852475143;

for (factor = 3; factor < x; factor++)
{
if (x % factor == 0)
x = x / factor;
}

printf("%lu\n", factor);

return (0);
}
