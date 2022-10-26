#include "lists.h"

/**
 *pop_listint - function to delete the head node
 *
 * @head: pointer  to head node
 * Return: node data
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (*head == NULL)
return (0);

temp = *head;
n = temp->n;

*head = (*head)->next;
free(temp);
return (n);
}
