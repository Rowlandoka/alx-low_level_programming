#include "lists.h"
/**
 * print_list - prints the elements of a list
 *@h:elements to prints
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
const list_t *temp;
unsigned int i = 0;

temp = h;
while (temp != NULL)
{
printf("[%u] %s\n", temp->len, temp->str);
temp = temp->next;
i++;
}
return (i);
}

