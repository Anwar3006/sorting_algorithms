#include "sort.h"

/**
 * swapNode - Swaps two nodes 
 * 
 * @head: Pointer to head of the list 
 * @A: First node to swap 
 * @B: Second node to swap 
 */
void swapNode(listint_t **head, listint_t **A, listint_t *B)
{
    A->next = B->next;
    if (B->next != NULL)
        B->next->prev = (*A);
    B->prev = (*A)->prev;
    B->next = (*A);
    if ((*A)->prev != NULL)
        (*A)->prev->next = B;
    else
        *head = B;
    (*A)->prev = B;
    // to update (*A)
    (*A) = B->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current;
    listint_t *index;
    if (list == NULL || (*list)->next == NULL)
        return;


    for (current = (*list)->next; current != NULL; current = current->next)
    {
        index = current->prev;
        while (index != NULL && index->n > current->n)
        {
            swapNode(list, &current, index);
            print_list(*list);
        }
    }
}
