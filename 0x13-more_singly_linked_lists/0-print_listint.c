#include "lists.h"
#include <stdio.h>

/**
 *print_listint - function to print element of node
 *@h: pointer to the head node
 *Return: number of element in the node
 */

size_t print_listint(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
printf(" %d\n", h->n);
h = h->next;
i++;
}
return (i);
}
