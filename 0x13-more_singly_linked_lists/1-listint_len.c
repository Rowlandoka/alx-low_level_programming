#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *listint_len - function to return the number of element
 *
 * @h: head pointer
 *Return: number of node element
 */

size_t listint_len(const listint_t *h)
{
const listint_t *temp;
unsigned int n = 0;

temp = h;
while (temp != 0)
{
n++;
temp = temp->next;
}
return (n);
}
