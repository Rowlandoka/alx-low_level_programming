#include "function_pointers.h"

/**
*int_index - function that searches integer
*@array: array pointer to search
*@size: size of the array
*@cmp: pointer function parameter
*
*Return: return -1 if fail, else otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])
			return (i);
	}
	return (-1);
}
