#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet lowercase 10x
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; j++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
