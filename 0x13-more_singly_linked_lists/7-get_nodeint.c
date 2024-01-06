#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *temp = head;

    for (i = 0; i < index; i++)
    {
        temp = temp->next;
    }
    if (!temp)
        return NULL;
    return (temp);
}