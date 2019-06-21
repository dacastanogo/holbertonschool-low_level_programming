#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This function prints the lowercase
 *alphabet in reverse, followed by a new line.
 *Return: 0 if programming is complete.
 */
int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
