#include "lists.h"


/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list to be printed.
 *
 * Return: Number of nodes of the list.
 */

size_t print_list(const list_t *h)
{

int elements = 0;

while (h != NULL)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		if (h->next != NULL)
			h = h->next;
		else
			break;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	if (h->next != NULL)
	{
		h = h->next;
		elements++;
	}
}
printf("-> %d elements", elements);
return (elements);
}
