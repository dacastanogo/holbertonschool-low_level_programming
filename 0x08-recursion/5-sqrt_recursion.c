#include "holberton.h"

/**
 * sqrt_finder - find the square root of y
 * @x: number to start with
 * @y: number to find sqrt of
 * Return: -1 or sqrt of y
 */
int sqrt_finder(int x, int y)
{
if (x * x == y)
return (x);
if (x * x > y)
return (-1);
return (sqrt_finder(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_finder(1, n));
}
