#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: list to be printed.
 *
 * Return: Number of elements of the list.
 */

size_t listint_len(const listint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
	h = h->next;
	elements++;
	}
	return (elements);
}
