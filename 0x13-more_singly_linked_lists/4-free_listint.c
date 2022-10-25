#include "lists.h"

/**
 * free_listint - function to free a node
 * @head: head node
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
