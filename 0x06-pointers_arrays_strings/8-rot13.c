#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to encode
 * Return: address of s
 */
char *rot13(char *s)
{
int i, j;
char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(s + i); i++)
{
for (j = 0; j < 52; j++)
{
if (x[j] == *(s + i))
{
*(s + i) = y[j];
break;
}
}
}
return (s);
}
