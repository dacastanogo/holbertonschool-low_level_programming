#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum
 * of the two diagonals of a square matrix of integer
 * @a: 2d int array representing square matrix
 * @size: the size*size of square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, diag1 = 0, diag2 = 0;

for (i = 0; i < size; i++)
{
diag1 += *(a + size * i + i);
diag2 += *(a + size * (i + 1) - i - 1);
}
printf("%d, %d\n", diag1, diag2);
}
