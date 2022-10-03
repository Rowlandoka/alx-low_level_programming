#include <stdio.h>
/**
 * main - prints the name of a program
 * @argc: number of arguments passed to the function
 * @argv: arguments vector of pointers to strings
 *
 *Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
