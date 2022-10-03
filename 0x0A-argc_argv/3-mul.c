#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the result of multiplying two numbers
 *@argc: numbers of arguments passed
 *@argv: vector of the arguments
 *Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
printf("Error\n");
return (1);
}

