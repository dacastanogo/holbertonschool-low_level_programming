#include <stdio.h>

/**
 *main - prints all possible combinations of two two-digit numbers,
 *comma separated, no repeated pair of combination.
 *Return: 0 if programming is complete.
 */
int main(void)
{
int a = 0;
int b = a + 1;

while (a <= 98)
{
while (b <= 99)
{
putchar('0' + a / 10);
putchar('0' + a % 10);
putchar(' ');
putchar('0' + b / 10);
putchar('0' + b % 10);
if (b != 99 || a != 98)
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
b = a + 1;
}
putchar('\n');
return (0);
}
