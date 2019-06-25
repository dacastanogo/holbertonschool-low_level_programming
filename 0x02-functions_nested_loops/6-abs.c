#include "holberton.h"

/**
 * _abs - Shows the absolute value of a number
 * @c: Number to evaluate.
 * Return: Absolute value
 */

int _abs(int c)
{
if (c < 0)
c *= -1;
return (c);
}
