#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This function prints all possible different combinations
 *of two digits, with no combinations repeated and coma separated.
 *Return: 0 if programming is complete.
 */
int main(void)
{
int a = 0;
int b = a + 1;

while (a <= 8)
{
while (b <= 9)
{
putchar(a + '0');
putchar(b + '0');
if (a < 8)
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
