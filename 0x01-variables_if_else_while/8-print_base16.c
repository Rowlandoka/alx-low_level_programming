#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	unsigned char a '0';
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar(a);
		a++;
	}
	a = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}	
