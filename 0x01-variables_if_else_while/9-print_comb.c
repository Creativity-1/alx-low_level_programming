#include <stdio.h>
/**
*main - Entry point
*Decription:'print comb of numbers'
*Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
