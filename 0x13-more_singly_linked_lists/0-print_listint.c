#include "lists.h"

/**
 * print_listint - prints integers in list
 * @h: struct listint_t type
 * Return: size_t value
 */

size_t print_listint(const listint_t *h)
{
size_t i;

for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
