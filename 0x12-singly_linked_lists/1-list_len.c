#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list.
 * @h: list to be printed.
 *
 * Return: Number of elements of the list.
 */

size_t list_len(const list_t *h)
{
int elements = 0;

while (h != NULL)
{
h = h->next;
elements++;
}
return (elements);
}
