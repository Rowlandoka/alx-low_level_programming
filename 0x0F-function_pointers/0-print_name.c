#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: person name
 *@f: pointer function passed as parameter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
