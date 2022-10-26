#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 *
 * @head:head pointer
 * @index: current index of node.
 * Return: index of current node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current;
unsigned int count = 0;

if (head == NULL)
return (NULL);
current = head;
while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}
return (current);
}
