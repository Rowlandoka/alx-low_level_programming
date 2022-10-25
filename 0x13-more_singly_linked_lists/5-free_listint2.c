#include "lists.h"

/**
 *free_listint2 - free node
 *@head: head pointer
 *Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *current;

while (current != NULL)
{
current = *head;
*head = NULL;
free(*head);
}
}
