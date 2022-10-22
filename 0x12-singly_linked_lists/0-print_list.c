#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints the elements of a list_t list
 *@h:pointer to the start of the list
 *
 *Return: number of node in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}

