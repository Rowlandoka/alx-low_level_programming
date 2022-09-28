#include "main.h"

/**
* test_sqrt - helper function to test the number
*@b: first number
*@e: second number
*Return: integer
*/
int test_sqrt(int b, int e)
{
	if (b * b == e)
		return (b);
	if (b * b > e)
		return (-1);
	return (test_sqrt(b + 1, e));
}

/**
* _sqrt_recursion - print the square root of natural numbers
*@n: number to find square root
* Return: integer
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (test_sqrt(1, n));
}
