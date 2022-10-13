#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*op_add - add 5 functions
*@a: first number
*@b: second number
*Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - substracts
*@a: int a
*@b: int b
*Return: substract a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplies
*@a:int a
*@b: int b
*Return: multiplies a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - Divide two integers
*@a: int a
*@b: int b
*Return: divides a by b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - remainder of division
*@a: int a
*@b: int b
*Return: remainder of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
