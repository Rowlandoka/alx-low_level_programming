# include <stdio.h>
/**
 * main - Prints all arguments passed into it
 * @argc: number of arguments passed
 * @argv: vector of the arguments passed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
