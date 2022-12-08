#include "lists.h"

/**
 *dlistint_len - return the number of elements
 *@h: pointer to the node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tmp;
int count = 0;

tmp = h;
while (tmp != NULL)
{
count++;
tmp = tmp->next;
}
return (count);
}
