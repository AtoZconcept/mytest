#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *add;
    list_t *temp = *head;

    add = malloc(sizeof(list_t));

    add->str = strdup(str);
    add->len = strlen(str);
    add->next = NULL;

    if (*head == NULL)
    {
        *head = add;
        return (add);
    }
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = add;
    
  
    return (add);
}