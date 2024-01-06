#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t *temp = *head;

    if(!*head)
        return (0);
    else
        (*head) = (*head)->next;
        return (temp->n);
}