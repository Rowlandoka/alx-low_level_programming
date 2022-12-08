#include "lists.h"

/**
 * print_dlistint - print all elements of dlistint
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *tmp;
int count = 0;

tmp = h;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
count++;
}
return (count);
}
