#include "sort.h"
/**
 * insertion_sort_list - Function that sorts a doubly linked list of integers in
 * iascending order using the insertion sort algorithm
 * @list: 1st input
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
listint_t *a = NULL;
listint_t *b = NULL;
listint_t *c = NULL;
if (!list || !(*list) || !(*list)->next)
return;
a = (*list)->next;
while (a)
{
c = a->next;
b = a->prev;
while (b && a->n < b->n)
{
if (b->prev)
b->prev->next = a;
b->next = a->next;
a->next = b;
a->prev = b->prev;
b->prev = a;
if (b->next)
b->next->prev = b;
if (!a->prev)
(*list) = a;

b = a->prev;
print_list(*list);
}
a = c;
}
}
