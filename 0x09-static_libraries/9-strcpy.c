#include "holberton.h"
/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: string that's being pointed
 * @src: copied string
 *
 *Return: the pointer to the dest buffer
 */
char *_strcpy(char *dest, char *src)
{
char *i = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (i);
}
