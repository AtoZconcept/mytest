#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t element = 0;

    if (!h)
        printf("(nil)\n");
    while (h)
    {
        element++;
        printf("%d\n", h->n);
        h = h->next;
    }
    return element;
}