#include "lists.h"
#include <stdio.h>

/**
 *print_listint - function to print element of node
 *@h: pointer to the head node
 *Return: size_t value
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf(" %d\n", h->n);
i++;
h = h->next;
}
return (i);
}
