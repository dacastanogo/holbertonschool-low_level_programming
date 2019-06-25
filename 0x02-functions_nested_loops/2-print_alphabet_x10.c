#include "holberton.h"
/**
 *print_alphabet_x10 - this function prints 10 times the alphabet.
 *Description: prints the aphabet 10th times.
 *Return: 0 if programming is complete.
 */
void print_alphabet_x10(void)
{
int y;
int x;

for (y = '0'; y <= 9; y++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
y++;
}
