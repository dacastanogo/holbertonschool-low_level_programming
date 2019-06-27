#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
int row = 1;
int num = 0;
int i = 0;
int j = 0;

while (row <= 10)
{
num = 0;
while (num <= 14)
{
if (num < 10)
{
j = num;
}
else
{
i = num / 10;
j = num % 10;

_putchar(i + '0');
}
_putchar(j + '0');
num++;
}
_putchar('\n');
row++;
}
}
