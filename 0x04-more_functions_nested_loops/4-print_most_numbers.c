#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints number from 0 to 9, excluding 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n == 2) || (n == 4))
		{
			continue;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
