#include <stdio.h>

/**
 * main - entry point
 * Return: 0 if programming is completed
 */

int main(void)
{
int mult = 0;
int acum = 0;

while (mult < 1024)
{
if (mult % 3 == 0 || mult % 5 == 0)
{
acum += mult;
}
mult++;
}
printf("%d\n", acum);

return (0);
}
