#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This function prints all possible combinations
 *of single-digit numbers.
 *Return: 0 if programmig is complete.
 */
int main(void)
{
int num = '0';

while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
