#include "holberton.h"
/**
 *swap_int - swaps the values of two integers
 *@x: int 1
 *@y: int 2
 *
 *Return: void
 */
void swap_int(int *x, int *y)
{
int z;

z = *x;
*x = *y;
*y = z;
}
