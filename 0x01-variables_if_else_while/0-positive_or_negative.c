#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *
 *Description:This program will assign a random number
 *to the variable n each time it is executed,
 *and will say if it is positive, negative o zero.
 *Return: return 0 when programming is complete
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive", n);
else if (n == 0)
printf("%d is zero", n);
else
printf("%d is negative", n);
putchar('\n');
return (0);
}
