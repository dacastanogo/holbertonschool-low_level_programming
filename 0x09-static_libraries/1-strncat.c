#include "holberton.h"

/**
* _strncat - function that concatenates two strings.
* @dest: objective string to be concatenated with
* @src: string to append to dest.
* @n: numbers of bytes to be used from src
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{

int i = 0;
int j = 0;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
*(dest + i) = *(src + j);
i++;
}
return (dest);
}
