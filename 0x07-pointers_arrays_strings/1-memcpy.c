#include "holberton.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: copy destination
 * @src: origin of data to be copied
 * @n: bytes to be copied
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i = 0;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
