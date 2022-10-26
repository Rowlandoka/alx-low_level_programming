#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index position
 *
 * @head:head of the list
 * @index: location of node in the list
 * Return: pointer to the head list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int i;

if (!head || *head)
return (-1);
temp = *head;
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
for (i = 0; i < (index - 1); i++)
{
temp = temp->next;
if (temp == NULL)
return (-1);
}
prev = temp->next;
temp->next = prev->next;
free(prev);
return (1);
}
