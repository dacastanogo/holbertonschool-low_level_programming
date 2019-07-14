#include "holberton.h"
#include <stddef.h>

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: string to search in
 * @needle: string to be find
 *
 * Return: pointer matching substring or 0 otherwise
 */
char *_strstr(char *haystack, char *needle)
{
int i;

while (*haystack)
{
for (i = 0; *(needle + i); i++)
if (*(needle + i) != *(haystack + i))
break;
if (!*(needle + i))
return (haystack);
haystack++;
}
return (0);
}
