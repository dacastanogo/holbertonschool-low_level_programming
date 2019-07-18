#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: the string to copy
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
char *p;
unsigned int len, j;

if (str == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)
;
len++;
if (len < 1)
return (NULL);
p = malloc(len *sizeof(char));
if (p == NULL)
{
free(p);
return (NULL);
}
for (j = 0; j < len; j++)
p[j] = str[j];
p[j] = '\0';
return (p);
}
