#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0 (successful)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
