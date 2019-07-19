#include "holberton.h"
#include "stdlib.h"

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (!p)
exit(98);
return (p);
}
