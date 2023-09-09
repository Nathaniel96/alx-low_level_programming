#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0 (suuccessful)
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + 'O');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);


}
