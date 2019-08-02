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
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: addres of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *node = *head;

if (!head || !new_node)
return (NULL);
if (str)
{
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(new_node->str);
}
if (node)
{
while (node->next)
node = node->next;
node->next = new_node;
}
else
*head = new_node;
return (new_node);
}
