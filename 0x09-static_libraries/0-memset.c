#include "holberton.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: string to be replaced
 * @b: constant
 * @n: number of bytes to replace
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
