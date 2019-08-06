#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list, and returns
 * the head nodes data (n).
 * @head: address of pointer to first node
 *
 * Return: value of requested node
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
	{
		return (0);
	}

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
