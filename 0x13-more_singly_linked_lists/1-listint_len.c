#include "lists.h"

size_t listint_len(const listint_t *h)
{
    size_t element = 0;
    
    while (h)
    {
        element++;
        h = h->next;
    }
    return (element);
}