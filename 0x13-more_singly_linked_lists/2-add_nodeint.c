#include   "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function to add node at the beginning
 *
 * @head: Pointer to the node
 * @n: Data to passed
 * Return: address of new element or Null if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
