#include <stdio.h>

/**
 * main - entry point
 * Return: 0 if programming is completed
 */

int main(void)
{
int x;
int y;
long nfib;
long acum;

x = 1;
y = 2;
nfib = 0;
acum = 2;

while (nfib < 4000000)
{
nfib = x + y;

if (nfib % 2 == 0)
{
acum += nfib;
}

x = y;
y = nfib;
}

printf("%li\n", acum);

return (0);
}
