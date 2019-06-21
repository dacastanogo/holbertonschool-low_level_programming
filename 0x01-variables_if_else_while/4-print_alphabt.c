#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This function prints the alphabet in lowercase,
 *followed by a new line. Print all the letters except q and e
 *Return: 0 if programming is complete.
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter == 'e' || letter == 'q')
letter++;
else
{
putchar(letter);
letter++;
}
}
putchar('\n');
return (0);
}
