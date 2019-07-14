#include "holberton.h"
/**
* _strcat - function that concatenates two strings.
* @dest: objetive string to be concatenated with
* @src: string to append to dest.
* Return: dest
*/
char *_strcat(char *dest, char *src)
{

int i = 0;
int j = 0;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0'; j++)
{
*(dest + i) = *(src + j);
i++;
}
return (dest);
}
