#include "lists.h"

/**
 *sum_listint- sum the data of node
 *
 *@head: pointer to the head
 *Return: sum of data in a node
 */

int sum_listint(listint_t *head)
{
listint_t *temp;
int sum = 0;

temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
