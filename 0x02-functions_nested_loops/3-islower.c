#include "holberton.h"
/**
 *main - entry point
 *
 *Description: this function that checks for lowercase character.
 *Return: 0 if character is lowercase and 1 otherwise..
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return(1);
else
return(0);
}
