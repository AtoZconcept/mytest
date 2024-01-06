#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *add;
    listint_t *temp = *head;

    add = malloc(sizeof(listint_t));
    if (!add)
        return NULL;

    add->n = n;
    add->next = NULL;

    if (*head == NULL)
    {
        (*head) = add;
        return (add);
    }

    while(temp->next)
    {
        temp = temp->next;
    }

    temp->next = add;
    return (add);
}