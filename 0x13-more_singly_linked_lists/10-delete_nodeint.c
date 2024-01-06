#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp = *head;
    unsigned int i;

    for (i = 0; i < index; i++)
    {
        temp = temp->next;
    }
    
}