#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
*add_node_end - function that add node to the end
*@head: head of pointer
*@str: string to pass
*Return: address
*/
list_t *add_node_end(list_t **head, const char *str)
{
int i = 0;
list_t *new, *temp;
while (str[i])
i++;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = i;
new->next = NULL;
if (strdup(str) == NULL)
{
free(new);
return (NULL);
}
if (*head == NULL)
{
*head = new;
return (new);
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
return (new);
}
}
