#include "holberton.h"

/**
* *_strncpy - function that copies a string.
* @dest: objective string to be concatenated with
* @src: string to append to dest.
* @n: numbers of bytes to be used from src
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{

int i = 0;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n ; i++)
{
dest[i] = '\0';
}
return (dest);
}
