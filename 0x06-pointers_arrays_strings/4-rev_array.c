#include "holberton.h"
/**
* reverse_array - function that reverses the content of an array of integers.
* @n: numbers of elements of the array.
* @a: array to be reversed.
* Return: dest
*/
void reverse_array(int *a, int n)
{

int i = 0;
int x = 0;

for (i = 0; i < n; i++)
{
x = a[n - 1];
a[n - 1] = a[i];
a[i] = x;
n--;
}
}
