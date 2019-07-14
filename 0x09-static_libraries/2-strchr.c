#include "holberton.h"

/**
 * *_strchr - function that locates a character in a string.
 * @s: pointer to a string
 * @c: char to be located
 * Return: address of s
 */

char *_strchr(char *s, char c)
{
unsigned int i, len;

len = 0;

while (s[len] != '\0')
len++;

for (i = 0; i <= len; i++)
if (s[i] == c)
{
s = &s[i];
return (s);
}

return (0);
}
