#include "main.h"

/**
*malloc_checked -function to allocate memory
*@b: integer pointer
*Return: returns a pointer
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
