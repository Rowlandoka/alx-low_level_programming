#include "main.h"

/**
* _strncat - concatenate two array
*@dest: destination of cat
*@src: source of cat
*@n: number of times to append
*
*Return: char value
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
