#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This function prints the alphabet in lowercase,
 *and then in uppercase, followed by a new line.
 *Return: 0 if programming is complete
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

letter = 'A';

while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
