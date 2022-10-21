#include "lists.h"


/**
* list_len - function to return the number of element
*@h: pointer to the node element
*Return: number of node element
*/
size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int count = 0;
temp = h;
while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}
