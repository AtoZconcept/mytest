#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
    list_t *add;

    add = malloc(sizeof(list_t));
    if (add == NULL)
    {
        return NULL;
    }
    add->str = strdup(str);
    add->len = strlen(str);
    add->next = *head;
    (*head) = add;
}