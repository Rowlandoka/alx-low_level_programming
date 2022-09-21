#include "main.h"

/**
 * _strcat - concatenate two arrays
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: char value
 */
char *_strcat(char *desc, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
