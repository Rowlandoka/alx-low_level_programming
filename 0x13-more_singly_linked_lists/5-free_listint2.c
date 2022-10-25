#include "lists.h"

/**
 *free_listint2 - free node
 *@head: head pointer
 *Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *current, *temp;

if (head == NULL)
return (NULL);

current = *head;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
*head = NULL;
}
