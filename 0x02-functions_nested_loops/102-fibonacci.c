#include <stdio.h>

/**
 * main - entry point in c
 * Return: 0 if successful
 */

int main(void)
{
long x;
long y;
int n;

x = 1;
y = 2;
n = 3;

printf("%li, ", x);
printf("%li, ", y);

while (n < 50)
{
long nfib = x + y;

printf("%li, ", nfib);
x = y;
y = nfib;
n++;
}

while (n == 50)
{
long nfib = x + y;

printf("%li\n", nfib);
x = y;
y = nfib;
n++;
}

return (0);
}
