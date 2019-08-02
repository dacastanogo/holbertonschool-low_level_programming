#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - function that determines the lenght of a string.
 *@s: pointer to a string
 *
 *Return: lenght of the string.
 */

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_head = malloc(sizeof(list_t));

if (!head || !new_head)
return (NULL);
if (str)
{
new_head->str = strdup(str);
if (!new_head->str)
{
free(new_head);
return (NULL);
}
new_head->len = _strlen(new_head->str);
}
new_head->next = *head;
*head = new_head;
return (new_head);
}
