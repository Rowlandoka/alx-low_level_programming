#include "main.h"

/**
*array_range - creates array of integers
*@min: minimum integer
*@max: maximum integer
*Return: array pointer
*/
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
