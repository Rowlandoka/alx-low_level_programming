#include "lists.h"
/**
 *add_nodeint_end - add node to the end
 *
 *@head: start of node
 *@n: value given to new node
 *Return: link list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *tmp;

newNode = malloc(sizeof(listint_t));
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
*head = newNode;
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = newNode;
}
return (*head);
}
