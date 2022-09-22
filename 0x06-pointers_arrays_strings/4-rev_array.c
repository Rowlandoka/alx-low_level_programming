#include "main.h"

/**
* reverse_array - reverse an array of integers
*@a: array to be reversed
*@n: number of array to reverse
*
* Return: return value
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
