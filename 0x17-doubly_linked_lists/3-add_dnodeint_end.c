#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of list
 * @head: pointer to the node
 * @n: number of node to be return
 * Return: value of node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *newNode;

	temp = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;
	if ((*head) == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	newNode->prev = temp;
	temp->next = newNode;
	return (newNode);
}
