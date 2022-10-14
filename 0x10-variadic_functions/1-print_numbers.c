#include "variadic_functions.h"

/**
*print_numbers - function to print numbers
*@n: number of integers
*@separator: string value printed
*Return: return numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;

	va_list numbers;

	va_start(numbers, n);

	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(numbers, int));

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
