#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: this function prints the alphabet
 *in lowercase, followed by a new line.
 *Return: Returns 0 upon successful completion
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
