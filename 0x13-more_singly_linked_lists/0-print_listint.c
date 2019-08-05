#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: list to be printed.
 *
 * Return: Number of nodes of the list.
 */

size_t print_listint(const listint_t *h)
{

	int elements = 0;

	while (h != NULL)
	{
		if (h->n == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%d", h->n);
		}
		h = h->next;
		elements++;
	}
	return (elements);
}
