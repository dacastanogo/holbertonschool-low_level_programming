#include "holberton.h"
/**
 * _islower - checks if letter is lowercase
 * @c: letter to be checked
 *
 * Description: checks lowercase
 * Return: 1 or 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
