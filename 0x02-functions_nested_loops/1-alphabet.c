#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: Always returns 0
 *
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}

	_putchar('\n');
}
