#include "holberton.h"

/**
* _strcmp - function that compares two strings.
* @s1: first string to be compared.
* @s2: second strig to be compared.
* Return: dest
*/
int _strcmp(char *s1, char *s2)
{

int i = 0;
int x;

for ( i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if ( s1[i] == s2[i] )
{
x=0;
}
else
{
x = s1[i] - s2[i];
break;
}
}
return (x);
}
