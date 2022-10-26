#include "lists.h"

/**
 * reverse_listint - print node in reverse order
 *
 * @head: head pointer
 * Return: pointer to the first node in reverse order
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *current, *prev, *next;
current = *head;
prev = NULL;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}
*head = prev;
return (*head);
}
