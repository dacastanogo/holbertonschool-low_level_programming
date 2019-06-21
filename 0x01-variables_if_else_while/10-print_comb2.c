#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This function prints the numbers from 00 to 99
 *in ascending order, as a comma separated list and
 *using NO char data types.
 *Return: 0 if programming is complete.
 */
int main(void)
{
int num = 0;

while (num < 100)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
if (num != 99)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
