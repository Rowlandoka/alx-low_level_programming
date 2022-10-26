#include "lists.h"
/**
 *insert_nodeint_at_index - insert at position in a node
 *
 *@head: head pointer
 *@idx: position of node in the list
 *@n: number of node in the list
 *Return: number of element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *nextnode;

temp = *head;
nextnode = malloc(sizeof(listint_t));
if (nextnode == NULL)
return (NULL);
nextnode->n = n;
nextnode->next = NULL;

if (idx == 0)
{
nextnode->next = temp;
*head = nextnode;
return (*head);
}
while (idx > 1)
{
temp = temp->next;
idx--;
if (!temp)
{
free(nextnode);
return (NULL);
}
}
nextnode->next = temp->next;
temp->next = nextnode;
return (nextnode);
}
