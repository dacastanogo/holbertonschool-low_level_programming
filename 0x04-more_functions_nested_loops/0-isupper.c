#include "holberton.h"

/**
 * _isupper - checks input for an uppercase character
 * @c: input letter
 *
 * Return: 1 if c is uppercase, 0 if not
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}

return (0);
}
