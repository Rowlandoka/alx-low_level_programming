#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_iterator - function that iterate an array element
*@array: array to iterate
*@size: size of array
*@action: pointer function to return value
*
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
