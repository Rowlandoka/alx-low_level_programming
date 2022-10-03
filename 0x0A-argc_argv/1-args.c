#include <stdio.h>
/**
 * main - prints the number of arguments passed into the function
 * @argc:number of arguments passed
 * @argv:arguments vector of pointer to a string
 *
 *Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
