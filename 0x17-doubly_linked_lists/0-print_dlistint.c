#include "lists.h"

/**
 * print_dlistint - print all elements of dlistint
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
int count = 0;

while (h != NULL)
{
if (h->n == 0)
printf("[0] (nil)\n");
else
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
