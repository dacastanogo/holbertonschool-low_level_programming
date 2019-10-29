#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *current = NULL;
	listint_t *curr_min = NULL;

    if (!list || !*list || !(*list)->next)
        return;
    
    
}