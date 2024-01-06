#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *temp = *head, *new;
    unsigned int i;

    new = malloc(sizeof(listint_t));
    if (!new || !head)
        return NULL;

    new->n = n;
    new->next = NULL;
    if (idx == 0)
    {
        new->next = *head;
        *head = new;
        return (new);
    }

    for (i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }
    new->next = temp->next;
    temp->next = new;
    return (new);
}