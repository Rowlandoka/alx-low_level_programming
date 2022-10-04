#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - create an array of char and assign specific char
*@c: character to created
*@size: size of the array
*
*Return: Null if size equals 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	if (size == 0)
		return (NULL);

	if (size != 0)
	{
		array = (char *)malloc(size sizeof(char));
		if (size != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
