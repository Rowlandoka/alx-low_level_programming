#include "main.h"

/**
* _pow_recursion - find the value of x raise to power y
*@x: first number
*@y: second number
*
*Return: return integer
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
