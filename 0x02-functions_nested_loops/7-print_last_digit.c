#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @c: Number to evaluate
 * Return: last digit of number
 */

int print_last_digit(int c)
{
int r = c % 10;

if (r < 0)
r *= -1;
_putchar(r + '0');

return (r);
}
