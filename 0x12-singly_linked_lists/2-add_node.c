#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
*add_node - function to insert a node at the beginning
*@str: string to be inserted
*@head: pointer to the node
*
*Return: pointer to the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i = 0;

	while (str[i])
		i++;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
