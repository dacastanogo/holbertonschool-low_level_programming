#include "lists.h"


/**
 * get_nodeint_at_index -  function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to first node
 * @index: index of node to get
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int n =  0;

	while (head)
	{
		if (n == index)
		{
			return (head);
		}
		n++;
		head = head->next;
	}

return (NULL);
}
