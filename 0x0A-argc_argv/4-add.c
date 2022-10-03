#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds two positive numbers
 *@argc: number of arguments passed
 *@argv: vector of arguments
 *Return: return 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
int a = 0, i, j;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (isdigit(argv[i][j] == 0))
{
puts("Error");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
a += atoi(argv[i]);
}
printf("%d\n", a);
return (0);
}
