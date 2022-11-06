#include "sort.h"

void swap_data(listint_t *n1, listint_t *n2)
{
    n1->next = n2->next;
    n2->prev = n1->prev;
    n1->prev = n1->next;
    n2->next = n2->prev;
}

void insertion_sort_list(listint_t **list)
{
    listint_t *current;
    listint_t *index;
    if (list == NULL || (*list)->next == NULL)
        return;

    else
        for (current = (*list)->next; current->next != NULL; current = current->next)
        {
            index = current->prev;
            while (index != NULL && index->n > current->n)
            {
                swap_data(current, index);
                print_list(*list);
            }
        }
}