#include "holberton.h"

/**
 * *_strspn -  function that gets
 * the length of a prefix substring
 * @s: source string
 * @accept: char to be compared
 * Return: number of bytes that match
 */

unsigned int _strspn(char *s, char *accept)
{

int i = 0;
int j = 0;
int k = 0;
unsigned int cont = 0;

for (i = 0; accept[i] != '\0'; i++)
{
}

for (k = 0; k < i; k++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[k] == accept[j])
{
cont++;
}
}
}
return (cont);
}
