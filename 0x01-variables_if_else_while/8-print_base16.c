#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This functionprints all the numbers of base 16
 *in lowercase, followed by a new line.
 *Return: 0 if programming is complete.
 */
int main(void)
{
char num = '0';
char letter = 'a';

while (num <= '9')
{
putchar(num);
num++;
}

while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
