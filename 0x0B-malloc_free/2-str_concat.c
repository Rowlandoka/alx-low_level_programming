#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strlen - count array
*@s: array of element
*Return: 1
*/
int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
*str_concat - concat pointer to array
*@s1: array one
*@s2: array two
*Return: Always an array
*/
char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;
	/* if the array is empty*/
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	/*count the total size*/
	size = (_strlen(s1) + _strlen(s2) + 1);

	/*malloc*/
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	/*Concatenate array*/
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dst + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}
	return (dst);
}
